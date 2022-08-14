#include <stdio.h>
int main(){
    printf("Ejercicio 1 - Putchar \n");
    putchar('I');
    putchar('P');
    putchar('N');
    putchar('-');
    putchar('E');
    putchar('S');
    putchar('C');
    putchar('O');
    putchar('M');
    
    printf("\n");
    printf("\n");
 
    printf("Ejercicio 2 - Radio de un círculo\n");
    
    float radio;
 
    radio = 77.8/6.28327;
    printf("El radio de un círculo con un área de 77.8 cm es: %4.1f cm\n", radio);
 
    printf("\n");
 
    printf("Ejercicio 3 - Raíz de 777\n");
    printf("El valor entero de la raíz de 777 es: 27\n");
 
    printf("\n");
    printf("Ejercicio 4 - Suma de distancias\n");
    
    int solti, lunati, sumakm;
 
    solti = 150000000;
    lunati = 384400;
    sumakm = solti+lunati;
 
    float m, cm;
    m = 1.503844;
    cm = 1.503844;
    printf("Suma de la distancia entre la Tierra y el Sol más la distancias entre la Tierra y la Luna: \n");
    printf("En kilometros: %d km\n", sumakm);
    printf("En metros: %fx10^11 m\n",m);
    printf("En centímetros: %fx10^13 cm\n",cm);
 
    printf("\n");
    printf("Ejercicio 5 - Tamaño de datos primitivos\n");
 
    printf("El tamaño del dato primitivo char en bytes es de:%d\n", sizeof(char)); 
    printf("El tamaño del dato primitivo int en bytes es de:%d\n", sizeof(int));       
    printf("El tamaño del dato primitivo float en bytes es de:%d\n", sizeof(float));
    printf("El tamaño del dato primitivo double en bytes es de%d\n", sizeof(double));
    printf("El tamaño del dato primitivo long en bytes es de:%d\n", sizeof(long));
    printf("El tamaño del dato primitivo short en bytes es de:%d\n", sizeof(short));
    printf("El tamaño del dato primitivo signed en bytes es de:%d\n", sizeof(signed));
    printf("El tamaño del dato primitivo unsigned en bytes es de:%d\n", sizeof(unsigned));
    
    printf("\n");
    printf("Ejercicio 6 - Valores con signo y sin signo\n");
    unsigned int num1=-456; 
    signed int num2=456;
    signed int num3=77777999999;
    signed int num4=100000000000000;
    unsigned int num5=-1*10^56;
    unsigned int num6=-6*10^-79;
    signed int num7=333333333333;
    signed int num8=6777.56;
    signed int num9=55^-2;
    unsigned int num10=-0.55;
    unsigned int num11=-0.0000000000005;

    printf("%u\n",num1);
    printf("%d\n",num2);
    printf("%d\n",num3);
    printf("%d\n",num4);
    printf("%u\n",num5);
    printf("%u\n",num6);
    printf("%d\n",num7);
    printf("%d\n",num7);
    printf("%d\n",num8);
    printf("%u\n",num10);
    printf("%u\n",num11);
 
    printf("\n");
    printf("Ejercicio - 7\n");
 
    printf("Triangulo rectangulo\n");
    printf("*\n");
    printf("*   *\n");
    printf("*       *\n");
    printf("*            *\n");
    printf("* * * * * * * * *\n");
    printf("\n");
    printf("Cuadrado\n");
    printf("*  * * *  *\n");
    printf("*         *\n");
    printf("*         *\n");
    printf("*         *\n");
    printf("*  * * *  *\n");
    printf("\n");
    printf("Rectángulo\n");
    printf("* * * * * * *\n");
    printf("*           *\n");
    printf("* * * * * * *\n");
    printf("\n");
    printf("Romboide\n");
    printf("* * * * * * *\n");
    printf(" *           *\n");
    printf("  * * * * * * *\n");
    printf("\n");
    printf("Trapecio\n");
    printf("    * * * * * \n");
    printf("  *           *\n");
    printf("* * * * * * * * *\n");
    printf("\n");
    printf("Circulo\n");
     printf("       *   *\n");
    printf("   *           *\n");
    printf(" *               *\n");
    printf("*                 *\n");
    printf("*                 *\n");
    printf(" *               *\n");
    printf("   *           *\n");
    printf("       *   *\n");
    
    printf("\n");
    printf("Ejercicio - 8\n");
 
    int letra,div,mul,rest,resid,mayor,menor;
    div = 1024/32;
    mul=512*4;
    menor= 65556<65557;
    resid= 144%22;
    mayor=7891>7890;
    rest=(89-(-1));
    float suma,dec;
    dec = 7.7;
    suma= 5.1+20.4;
    char arroba = '@';
    int a = 75;
    char c = a;
    printf("1024 dividido entre 32 nos da: %d\n",div);
    printf("512 multiplicado por 4 nos da: %d\n",mul);
    printf("65556<65557 es verdadero, es decir: %d\n",menor);
    printf("El residuo de la división 144/22 es: %d\n",resid);
    printf("5.1 más 20.4 nos da: %4.1f\n",suma);
    printf("7891>7890 es verdadero, es decir: %d\n",mayor);
    printf("La resta de 89 menos -1 nos da: %d\n",rest);
    printf("El arroba es: %i",arroba);
    }