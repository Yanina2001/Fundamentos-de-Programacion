#include <string.h>

void media(imagen* fotografia){

    //sacamos la media de b, g y r y las unimos, necesitamos la suma y el tamaño
    int sumaB = 0;
    int sumaG = 0;
    int sumaR = 0;
    int size = fotografia -> height * fotografia -> width;

    //guardamos la matriz en nuestro arreglo
    for(int i=0; i<fotografia -> height; i++){
        for(int j=0; j<fotografia -> height; j++){
            sumaB += fotografia -> bgr[i][j].blue;
            sumaG += fotografia -> bgr[i][j].green;
            sumaR += fotografia -> bgr[i][j].red;
        }
    }
    printf("\nEl color promedio es: (%d,%d,%d) = %X%X%X\n", sumaB/size, sumaG/size, sumaR/size, sumaB/size, sumaG/size, sumaR/size);
}

//algortimo de ordenamiento
void Quicksort(int* arr, int n){ 
    
    if(n <= 1){
        return;
    }

    int p = arr[n/2];
    int i, j, aux;

    for(i=0, j=n-1; i<n; i++, j--){
        while(arr[i] < p){      
            i++;
        }
        while(arr[j] > p){
            j--;
        }
        if(i >= j)
            break;
        aux = arr[i];
        arr[i] = arr[j];
        arr[j] = aux;
    }

    Quicksort(arr, i);
    Quicksort(arr+i, n-i);
}


void mediana(imagen* fotografia){
    int k=0;

    //creamos 3 arreglos para b, g y r, asignamos bloque de memoria
    int size = fotografia->width * fotografia->height;
    int* b = (int*)malloc(size * sizeof(int));
    int* g = (int*)malloc(size * sizeof(int));
    int* r = (int*)malloc(size * sizeof(int));

    //procedemos a asignarlos
    for(int i=0; i<fotografia -> height; i++){
        for(int j=0; j<fotografia -> height; j++){
            b[k] = fotografia->bgr[i][j].blue;
            g[k] = fotografia->bgr[i][j].green;
            r[k] = fotografia->bgr[i][j].red;
            k++;
        }
    }

    //ahora ordenamos
    Quicksort(b,size);
    Quicksort(g,size);
    Quicksort(r,size);

    printf("\nLa mediana por matriz de color es: ");
    if(size%2 == 0){
        printf("b: %d\n",b[size/2]);
        printf("g: %d\n",g[size/2]);
        printf("r: %d\n",r[size/2]);
    } else{
        printf("r: %d\n",(b[size/2] + b[(size/2)+1])/2);
        printf("g: %d\n",(g[size/2] + g[(size/2)+1])/2);
        printf("b: %d\n",(r[size/2] + r[(size/2)+1])/2);
    }
}

int crearTxt(char* txt, imagen* fotografia, int size, int ejeX, int ejeY){
    //escribimos la matriz
    if(ejeX + size >= fotografia -> width || ejeY + size >= fotografia -> height){
        printf("Fuera de los limites establecidos.");
        return 0;
    }

    FILE* file = fopen(txt,"w");
    if(file == NULL){
        printf("Error al crear el archivo. Intente de nuevo.\n");
        return 0;
    }

    for(int i = (fotografia -> height - 1 - ejeY); i >= (fotografia -> height - 1 - ejeY) - size; i--){
        fwrite(fotografia -> bgr[i] + ejeX, size, sizeof(BGR), file);
    }
    printf("\ntxt creado con exito.");
    fclose(file);
}

void segment(){
    
}

void imprimimosFormatoBmp(cabecera* archiveH, cabecerabmp* bmpH){

    printf("Formato de archivo BMP.\n1st Header:\ntype: %x\n",archiveH->type);
    printf("1. Cabecera: \ntipo: %x",archiveH->type);
    
    printf("tamaño del archivo: %d bytes.\n",archiveH->size);
    printf("basura: %d\n",archiveH->garbage);
    printf("offset: %d\n",archiveH->offset);

    printf("\n2. Cabecera:\ntamaño de la cabecera: %d bytes\n",bmpH->size);

    printf("ancho: %d\n",bmpH->width);
    printf("alto: %d\n",bmpH->height);
    printf("color de planos: %d\n",bmpH->colorplanes);
    printf("bits por pixel: %d\n",bmpH->bitCount);
    printf("compresion utilizada: %d\n",bmpH->compression);
    printf("tamaño de la imagen: %d\n",bmpH->sizeImage);
    printf("reservedX: %d\n",bmpH->reservedX);
    printf("reservedY: %d\n",bmpH->reservedY);
    printf("Numero de indices de color: %d\n",bmpH->indexNum);
    printf("Colores importantes: %d\n",bmpH->indexImportant);

}