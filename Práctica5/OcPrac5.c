
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char* Libros[35][6];
    int i;

    Libros[0][0]="1";
    Libros[1][0]="2";
    Libros[2][0]="3";
    Libros[3][0]="4";
    Libros[4][0]="5";
    Libros[5][0]="6";
    Libros[6][0]="7";
    Libros[7][0]="8";
    Libros[8][0]="9";
    Libros[9][0]="10";
    Libros[10][0]="11";
    Libros[11][0]="12";
    Libros[12][0]="13";
    Libros[13][0]="14";
    Libros[14][0]="15";
    Libros[15][0]="16";
    Libros[16][0]="17";
    Libros[17][0]="18";
    Libros[18][0]="19";
    Libros[19][0]="20";
    Libros[20][0]="21";
    Libros[21][0]="22";
    Libros[22][0]="23";
    Libros[23][0]="24";
    Libros[24][0]="25";
    Libros[25][0]="26";
    Libros[26][0]="27";
    Libros[27][0]="28";
    Libros[28][0]="29";
    Libros[29][0]="30";
    Libros[30][0]="31";
    Libros[31][0]="32";
    Libros[32][0]="33";
    Libros[33][0]="34";
    Libros[34][0]="35";




    Libros[0][1]="Anecdota de un dia"         ;
    Libros[1][1]="Burros Blancos"             ;
    Libros[2][1]="Cien anios y uno mas"       ;
    Libros[3][1]="Diamantes y dados"          ;
    Libros[4][1]="El avestrus"                ;
    Libros[5][1]="El cuento"                  ;
    Libros[6][1]="Elefantes"                  ;
    Libros[7][1]="Fiestas "                   ;
    Libros[8][1]="Gatoman"                    ;
    Libros[9][1]="Hipopotamos en su habitat"  ;
    Libros[10][1]="Italia, un nuevo mundo"    ;
    Libros[11][1]="Juanacatlan, pueblo magico";
    Libros[12][1]="Kids, where are them?"     ;
    Libros[13][1]="La ninia"                   ;
    Libros[14][1]="Metafisica"                ;
    Libros[15][1]="Nuevos horizontes"         ;
    Libros[16][1]="Osos polares"              ;
    Libros[17][1]="Pato Hood"                 ;
    Libros[18][1]="Poblaciones vulnerables"   ;
    Libros[19][1]="Quo duo"                   ;
    Libros[20][1]="Robin Hood"                ;
    Libros[21][1]="Significado de la vida"    ;
    Libros[22][1]="Soberanos"                 ;
    Libros[23][1]="Trasatlantico"             ;
    Libros[24][1]="Trasportes en el futuro"   ;
    Libros[25][1]="Trotamundos"               ;
    Libros[26][1]="Uvas para el vino"         ;
    Libros[27][1]="Verduras y frutas"         ;
    Libros[28][1]="Viajando ando"             ; 
    Libros[29][1]="Walter Cross, ¿Quién fue?" ;
    Libros[30][1]="Xcaret, un lugar magico"   ;
    Libros[31][1]="Yardas"                    ;
    Libros[32][1]="Zapato Viejo"              ;
    Libros[33][1]="";
    Libros[34][1]="";




    Libros[0][2]="8.5";
    Libros[1][2]="7.5";
    Libros[2][2]="6.5";
    Libros[3][2]="5.5";
    Libros[4][2]="4.5";
    Libros[5][2]="3.5";
    Libros[6][2]="2.5";
    Libros[7][2]="1.5";
    Libros[8][2]="0.5";
    Libros[9][2]="0.5";
    Libros[10][2]="1.5";
    Libros[11][2]="2.5";
    Libros[12][2]="3.5";
    Libros[13][2]="4.5";
    Libros[14][2]="5.5";
    Libros[15][2]="6.5";
    Libros[16][2]="7.5";
    Libros[17][2]="8.5";
    Libros[18][2]="9.5";
    Libros[19][2]="10.5";
    Libros[20][2]="11.5";
    Libros[21][2]="12.5";
    Libros[22][2]="13.5";
    Libros[23][2]="14.5";
    Libros[24][2]="15.5";
    Libros[25][2]="16.5";
    Libros[26][2]="17.5";
    Libros[27][2]="18.5";
    Libros[28][2]="19.5";
    Libros[29][2]="20.5";
    Libros[30][2]="21.5";
    Libros[31][2]="22.5";
    Libros[32][2]="23.5";
    Libros[33][2]="";
    Libros[34][2]="";




    Libros[0][3]="3.18";
    Libros[1][3]="0.74";
    Libros[2][3]="0.3";
    Libros[3][3]="0.14";
    Libros[4][3]="0.58";
    Libros[5][3]="0.46";
    Libros[6][3]="1.46";
    Libros[7][3]="1.9";
    Libros[8][3]="2.34";
    Libros[9][3]="2.78";
    Libros[10][3]="3.22";
    Libros[11][3]="3.66";
    Libros[12][3]="4.1";
    Libros[13][3]="4.54";
    Libros[14][3]="4.98";
    Libros[15][3]="5.42";
    Libros[16][3]="5.86";
    Libros[17][3]="6.3";
    Libros[18][3]="6.74";
    Libros[19][3]="7.18";
    Libros[20][3]="7.62";
    Libros[21][3]="8.06";
    Libros[22][3]="8.5";
    Libros[23][3]="8.94";
    Libros[24][3]="9.38";
    Libros[25][3]="9.82";
    Libros[26][3]="10.26";
    Libros[27][3]="10.7";
    Libros[28][3]="11.14";
    Libros[29][3]="11.58";
    Libros[30][3]="12.02";
    Libros[31][3]="12.46";
    Libros[32][3]="12.9";
    Libros[33][3]="";
    Libros[34][3]="";




    Libros[0][4]="Tahoma black"  ;
    Libros[1][4]="Agency"        ;
    Libros[2][4]="Abscissa"      ;
    Libros[3][4]="HP Simplified" ;
    Libros[4][4]="Arial"         ;
    Libros[5][4]="Calibri"       ;
    Libros[6][4]="Impact"        ;
    Libros[7][4]="Alanis hand"   ;
    Libros[8][4]="Jasmine UPC"   ;
    Libros[9][4]="Latha"         ;
    Libros[10][4]="Kaiti"        ;
    Libros[11][4]="Nyala"        ;
    Libros[12][4]="Verdana"      ;
    Libros[13][4]="Tahoma"       ;
    Libros[14][4]="Modern"       ;
    Libros[15][4]="Univers"      ;
    Libros[16][4]="Yu Gothic"    ;
    Libros[17][4]="Ravie"        ;
    Libros[18][4]="OCRB"         ;
    Libros[19][4]="Selawik"      ;
    Libros[20][4]="Perpetua"     ;
    Libros[21][4]="Times"        ;
    Libros[22][4]="Webdings"     ;
    Libros[23][4]="Sweet Pea"    ;
    Libros[24][4]="Bell MT"      ;
    Libros[25][4]="Ebrima"       ;
    Libros[26][4]="Mangal"       ;
    Libros[27][4]="Cambria"      ;
    Libros[28][4]="Dotum"        ;
    Libros[29][4]="Papyrus"      ;    
    Libros[30][4]="Arial Black"  ;
    Libros[31][4]="Georgia"      ;
    Libros[32][4]="French Script";
    Libros[33][4]="";
    Libros[34][4]="";


    

    Libros[0][5]="8.11";
    Libros[1][5]="2.38";
    Libros[2][5]="1.45";
    Libros[3][5]="4.30";
    Libros[4][5]="6.69";
    Libros[5][5]="7.95";
    Libros[6][5]="2.92";
    Libros[7][5]="1.68";
    Libros[8][5]="5.58";
    Libros[9][5]="1.14";
    Libros[10][5]="9.28";
    Libros[11][5]="0.06";
    Libros[12][5]="5.17";
    Libros[13][5]="4.07";
    Libros[14][5]="9.89";
    Libros[15][5]="2.38";
    Libros[16][5]="5.41";
    Libros[17][5]="2.68";
    Libros[18][5]="2.36";
    Libros[19][5]="4.46";
    Libros[20][5]="5.12";
    Libros[21][5]="2.91";
    Libros[22][5]="4.62";
    Libros[23][5]="6.72";
    Libros[24][5]="4.53";
    Libros[25][5]="1.95";
    Libros[26][5]="9.33";
    Libros[27][5]="4.84";
    Libros[28][5]="4.19";
    Libros[29][5]="0.43";
    Libros[30][5]="9.83";
    Libros[31][5]="1.07";
    Libros[32][5]="0.70";
    Libros[33][5]="";
    Libros[34][5]="";


    printf("\nLibro ID \tTitulo del libro\t \tAlto \tAncho \tFuente\t \tPrecios \n\n");

    for(i=0; i<35; i++){
        printf("%s \t\t%s \t\t\t%s \t\t%s \t%s \t%s \n",Libros[i][0], Libros[i][1], Libros[i][2], Libros[i][3], Libros[i][4], Libros[i][5]);
    }



    char* titulo[36][2];
    for(int i = 0; i < 36; i++){
        for(int j = 0; j < 2; j++){
            titulo[i][j] = Libros[i][j];
        }
    }

    /*char* carac[36][5];
    for(int i = 0; i < 36; i++){
        for(int j = 0; j < 6; j++){
            if(j == 1){
                continue;
            }
            if(j != 0){
                carac[i][j-1] = Libros[i][j];
            }else{
                carac[i][j] = Libros[i][j];
            }
        }
    }*/

    char tit[30] = "";
    char modif[30] = "";
    int fila = -1;
    int valor = 0;
    int opc = 0;

    while(opc != 3){
        puts("\nElige una opcion\n");
        puts("1. Modificar datos\n");
        puts("2. Visualizar datos\n");
        puts("3. Salir del Programa\n");
        scanf("%d",&opc);
        switch(opc){
            case 1:
                puts("Modificar datos\n");
                puts("Escriba el nombre de uno de los siguientes libros:\n");
                for(int i = 0; i < 36; i++){
                    for(int j = 0; j < 2; j++){
                        if(titulo[i][j] == NULL){
                            continue;
                        }
                        printf("%s\t\t",titulo[i][j]);
                    }
                    printf("\n");
                }
    
                    /*puts("\nQue valor desea cambiar?\n");
                    puts("\n1.Titulo\n2.Ancho\n3.Alto\n4.Fuente\n5.Precio");
                    scanf("%d",&valor);
                    switch(valor){
                        case 1:
                            puts("Digite el Titulo");
                            fgets(modif,30,stdin);
                            Libros[fila][1] = modif;
                            puts("\nDebug:");
                            puts(modif);
                            puts("\n");
                            puts("La modificacion ha sido exitosa");
                        break;

                        case 2:
                            puts("Digite el Ancho");
                            fgets(modif,30,stdin);
                            Libros[fila][2] = modif;
                            puts("La modificacion ha sido exitosa");
                        break;

                        case 3:
                            puts("Digite el Alto");
                            fgets(modif,30,stdin);
                            Libros[fila][3] = modif;
                            puts("La modificacion ha sido exitosa");
                        break;

                        case 4:
                            puts("Digita la Fuente");
                            fgets(modif,30,stdin);
                            Libros[fila][4] = modif;
                            puts("La modificacion ha sido exitosa");
                        break;

                        case 5:
                            puts("Digita el Precio");
                            fgets(modif,30,stdin);
                            Libros[fila][5] = modif;
                            puts("La modificacion ha sido exitosa");
                        break;

                        default:
                            puts("No existe la opcion dada, por favor pruebe con otro numero.");
                        break;
                    }
                }*/
            break;

            case 2:
                puts("\n\nLos libros y su informacion");
                for(int i = 0; i < 36; i++){
                    for(int j = 0; j < 6; j++){
                        if(Libros[i][j] == NULL){
                            continue;
                        }
                        printf("%s\t\t",Libros[i][j]);
                    }
                    printf("\n");
                }
            break;

            case 3:
                puts("Fin del Programa");
                exit(0);
                break;

            default:
                puts("No existe la opcion dada, por favor pruebe con otra opcion.");
            break;
        }
    }

}