#include<stdint.h>

//El archivo BMP esta formado por 4 estructuras
typedef struct{
    uint16_t type; //tipo de archivo
    unsigned int size; //tamaño del archivo en bytes
    int garbage; //basura
    unsigned int offset; //paleta de colores
} cabecera;

typedef struct{
    unsigned int size; //numero de bytes
    unsigned int width; //ancho
    unsigned int height; //alto
    uint16_t colorplanes; //color de planos
    uint16_t bitCount; //bits por pixel
    unsigned int compression; //compresion utilizada
    unsigned int sizeImage; //tamaño en bits de la imagen
    unsigned int reservedX; //todo 0
    unsigned int reservedY; //todo 0
    unsigned int indexNum; //numero de indices de color utilizados
    unsigned int indexImportant; //colores importantes
} cabecerabmp;

//tabla de colores 
typedef struct{
    unsigned char blue;
    unsigned char green;
    unsigned char red;
} BGR;

/*
La  matriz (BGR) guarda en hexadecial los valores del pixel
imagen -> BGR = (BGRBGR)
BGR indica el valor del color
*/
typedef struct{
    int height;
    int width;
    BGR **bgr;
} imagen;