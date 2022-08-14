
#include <stdio.h>   //Para el control de entrada/salida de datos estandar y archivos
#include <stdlib.h>  //Para la memoria dinamica
#include <stdint.h> //Para redefinir los tamaños del tipo de dato int

typedef struct {
  int size;        						  // Tamaño del archivo 
  uint16_t caracteristicaAdicional;       // Información reservada de la imagen
  uint16_t reservadoCopia;      
  int offset;      		                  // Valor donde empieza el pixel 0
} CabeceraImg;							  // variable que almacena la estructura de la cabecer

typedef struct {
  int tamCabecera;  	// Tamaño de la cabecera 
  int ancho;       		// Ancho de la imagen
  int alto;      		// Alto de la imagen
  uint16_t planes;      // Planos de color 
  uint16_t bpp;         // bits por pixel
  int compresion;   	// Información sobre la compresión utilizada
  int imgsize;     		// tamaño de los datos de imagen 
  int resX;        		// Resolución X
  int resY;        		// Resolución Y 
  int coloresR;      	// Rango de colores
  int imxtcolors;      
} Imagen;

unsigned char *cargaImagenFile(char *filename, Imagen *matrizImagen){
	FILE *fileImagen;
	CabeceraImg infoImg;     // cabecera 
	unsigned char *imgdata;   // datos de imagen (es una matriz que se lee de forma lineal y continua)
	uint16_t type;        // 2 bytes identificativos 

	//Lectura de imagen en modo lectura
	  fileImagen=fopen (filename, "r");
	if (!fileImagen)
		return NULL;       
	// Leemos los dos primeros bytes para comprobar el tipo de imagen BMP
	fread(&type, sizeof(uint16_t), 1, fileImagen);
	if (type !=0x4D42) {      
		fclose(fileImagen);
		return NULL;
	}
	 // Leemos las dos secciones de la imagen, la cabecera y la imagen.
	fread(&infoImg, sizeof(CabeceraImg), 1, fileImagen);
	fread(matrizImagen, sizeof(Imagen), 1, fileImagen);

	// Reservamos memoria para la imagen
	imgdata=malloc(matrizImagen->imgsize);
	// NSituamos el cursor donde empiezan los datos de imagen, de acuerdo al offset
	fseek(fileImagen, infoImg.offset, SEEK_SET);

	// Leemos los datos de imagen por 1 vez y almacenamos la información en el arreglo unidimensional
	fread(imgdata, matrizImagen->imgsize,1, fileImagen);
	  fclose(fileImagen);
	return imgdata;
}

void imprimePixeles(Imagen *contenidoImagen, unsigned char *img) {
	printf("Tam de la cabecera: %u\n", contenidoImagen->tamCabecera);
	printf("Ancho: %d\n", contenidoImagen->ancho);
	printf("Alto: %d\n", contenidoImagen->alto);
	printf("Cantidad de matrices: %d\n", contenidoImagen->planes);
	printf("Bits por pixel: %d\n", contenidoImagen->bpp);
	printf("Tamaño de datos de imagen: %u\n", contenidoImagen->imgsize);
	printf("Rango de colores: %d\n", contenidoImagen->coloresR);
	int ejeX, ejeY;
	//creamos un archivo donde almacenaremos los pixeles y su posicion
	FILE *archivo = NULL;
	archivo = fopen("C:\\Users\\Yanina\\Desktop\\lena.txt", "w+"); 
	if(archivo == NULL ) {
		printf("No fue posible abrir el archivo\n");
	}
	// imprimimos los pixeles del plano de escala de grises.
	// recorremos la imagen 
	int posicionY=0, posicionX=0;
	for (ejeY=--contenidoImagen->alto; ejeY>0; ejeY--){
		posicionX=0;
		for (ejeX=0; ejeX<contenidoImagen->ancho; ejeX++){
			fprintf (archivo,"[%d][%d]=%d  ",posicionY,posicionX,img[ejeX+ejeY*(contenidoImagen->ancho)]);  //se imprime el contador de posiciones
			posicionX++;
		}
		posicionY++;
		fprintf(archivo,"\n");  //se imprime un salto de linea al terminar de recorrer la fila
	}
	/*Cuando se concluya las operaciones sobre el archivo, se debera cerrar. tambien se debe liberar la memoria dinamica */
	fclose(archivo); 
}

int main(int argc, char** argv) {
	Imagen estructuraImg;
	unsigned char *img;
	img=cargaImagenFile("C:\\Users\\Yanina\\Desktop\\lena.bmp", &estructuraImg);
	imprimePixeles(&estructuraImg, img);
	return 0;
}