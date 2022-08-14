#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "bit_map.h"

int main(){
    double t0 = clock();
    cabecera archiveH;
    cabecerabmp bmpH;
    imagen img;
    char segmentar;

    if(abrirArchivoBMP("astronauta.bmp", &archiveH,&bmpH, &img) == 0){
        return EXIT_FAILURE;
    }
    double t1= clock();
    puts("\nDesea segmentar la imagen? (s/n)");
    scanf("%c",&segmentar);

    if(segmentar == 's'){

        int opc, cont=0;

        do{
            char txt[30] = "astronauta";
            char bmp[30] = "astronauta";
            char numero[2];
            int ejeX, ejeY;

            puts("\nPor favor digite la segmentacion que desea: ");
            puts("1. 32x32");
            puts("2. 64x64");
            puts("3. Salir");
            scanf("%d",&opc);
        
            printf("\nDigite las posiciones: x[0-%d], y[0-%d]\n",img.width,img.height);
            printf("x: ");
            scanf("%d",&ejeX);
            printf("y: ");
            scanf("%d",&ejeY);

            switch(opc){
            case 1:
                //Le damos nombre a los archivos
                itoa(cont, numero, 10);
                    strcat(txt,"_S_");
                    strcat(txt,numero);
                    strcat(txt,".txt");
                    //bmp
                    strcat(bmp,"_S_");
                    strcat(bmp,numero);
                    strcat(bmp,".bmp");
                    //crear txt
                    crearTxt(txt,&img,32,ejeX,ejeY);
                    //crear bmp
                    segment(bmp,&archiveH,&bmpH,&img,32,ejeX,ejeY);
                    //incremento count
                    cont++;
                    break;
            case 2:
                //Le damos nombre a los archivo
                itoa(cont, numero, 10);
                    strcat(txt,"_S_");
                    strcat(txt,numero);
                    strcat(txt,".txt");
                    //bmp
                    strcat(bmp,"_S_");
                    strcat(bmp,numero);
                    strcat(bmp,".bmp");
                    //crear txt
                    crearTxt(txt,&img,64,ejeX,ejeY);
                    //incremento count
                    cont++;
                break;
            case 3:
                puts("La segmentacion ha terminado.\n");
                break;
            default:
                puts("La opcion no existe, intente nuevamente.\n");
                break;
            }
        }while(opc != 3);
    }
    printf("Programa terminado.\n\n");
    double tiempo = ((double)(t1-t0)/CLOCKS_PER_SEC);
    printf("Tiempo de ejecucion: %lf s\n", tiempo);
    printf("Simulacion de transferencia a traves de una VPN con V=2.5kB/s");
    printf("Formula: \n");
    printf("(FileSize/V) + Tiempo de ejecucion");
    printf("T = %lf s\n",(double)(archiveH.size/2500) + tiempo);
    return EXIT_SUCCESS;
}