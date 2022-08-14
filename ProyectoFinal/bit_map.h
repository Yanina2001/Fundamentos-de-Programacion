#include "estructurabmp.h"
#include "datosBas.h"

imagen leerImagen(FILE* file, int height, int width){
    imagen fotografia;
    fotografia.bgr = (BGR**)malloc(height * sizeof(BGR*));
    fotografia.height = height;
    fotografia.width = width;
    for(int i=height-1; i>=0; i--){
        fotografia.bgr[i] = (BGR*)malloc(width * sizeof(BGR));
        fread(fotografia.bgr[i],width,sizeof(BGR),file);
    }
    return fotografia;
}

int escImagen(cabecera* archiveH, cabecerabmp* bmpH, imagen* fotografia){
    FILE* file = fopen("moon.bmp","w");
    if(file == NULL){
        printf("Error al crear el archivo.");
        return 0;
    }

    //archivo cabecera
    fwrite(&archiveH->type,sizeof(uint16_t),1,file);//tipo
    fwrite(&archiveH->size,sizeof(int),1,file);//tamaño
    fwrite(&archiveH->garbage,sizeof(int),1,file);//basura
    fwrite(&archiveH->offset,sizeof(int),1,file);//OFFSET

    //cabecerabmp
    fwrite(bmpH,sizeof(cabecerabmp),1,file);

    //matriz
    for(int i = bmpH->height - 1; i >= 0; i--){
        fwrite(fotografia->bgr[i], bmpH->width, sizeof(BGR), file);
    }
    fclose(file);
}

unsigned char gris(BGR bgr){
    return ((bgr.blue * 0.3) + (bgr.green * 0.6) + (bgr.red * 0.1));
}

void escalaGris(imagen* fotografia){
    for(int i=0; i<fotografia -> height; i++){
        for(int j=0; j<fotografia->width; j++){
            fotografia->bgr[i][j].blue = fotografia->bgr[i][j].green = fotografia->bgr[i][j].red = gris(fotografia->bgr[i][j]);
        }
    }
}

imagen leerImagenBW(FILE* file, int height, int width){
    imagen fotografia;
    fotografia.bgr = (BGR**)malloc(height * sizeof(BGR*));
    fotografia.height = height;
    fotografia.width = width;
    int bytestoread = ((24 * width + 31)/32)*4;
    int numbgr = bytestoread/sizeof(BGR) + 1;
    for(int i = height - 1; i >=0; i--){
        fotografia.bgr[i] = (BGR*)malloc(numbgr * sizeof(BGR));
        fread(fotografia.bgr[i],1,bytestoread,file);
    }
    return fotografia;
}

int abrirArchivoBMP(char* string, cabecera* archiveH, cabecerabmp* bmpH, imagen* img){//Returns Array
    FILE* file = fopen(string,"rb");
    if(file == NULL){
        puts("Error al abrir el archivo");
        return 0;
    }
    //leemos archive Header
    fread(&archiveH->type,sizeof(uint16_t),1,file);//TYPE
    if(archiveH->type != 0x4D42){
        puts("Archivo no compatible.");
        fclose(file);
        return 0;
    }
    fread(&archiveH->size,sizeof(int),1,file);//SIZE
    fread(&archiveH->garbage,sizeof(int),1,file);//GARBAGE
    fread(&archiveH->offset,sizeof(int),1,file);//OFFSET
    //leemos bmp header
    fread(bmpH,sizeof(cabecerabmp),1,file);
    //Imprimimos para verificar
    imprimimosFormatoBmp(archiveH,bmpH);
    //Verificamos si es el tipo de imagen a procesar bpp = 24, compresion = 0, headerSize = 40
    if(bmpH->compression != 0 || bmpH->bitCount != 24 || bmpH->size != 40){
        puts("Archivo no Compatible");
        fclose(file);
        return 0;
    }
    //Vamos a la posicion de la matriz en el archivo
    fseek(file,archiveH->offset,SEEK_SET);
    //guardamos la matriz
    *img = leerImagenBW(file,bmpH->height,bmpH->width);
    //media y mediana
    media(img);
    mediana(img);
    //Escribimos un nuevo bmp
    escImagen(archiveH,bmpH,img);
    fclose(file);
    return 1;
}