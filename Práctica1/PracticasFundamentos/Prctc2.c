#include<stdio.h>
#include<math.h>

int main(){

    printf("Ejercicio1\n");
    putchar('I');
	putchar('P');
	putchar('N');
	putchar('-');
	putchar('E');
	putchar('S');
	putchar('C');
	putchar('O');
	putchar('M');

    printf("\n\nEjercicio2");
    float radio;  
		radio = 77.8 / 6.2832;
        printf("\nEl radio de un circulo con un área de 77.8 cm es: %f",radio);printf("cm%c");

    printf("\n\nEjercicio3");
    
    printf("\n\nEjercicio4");
    int solTi, lunaTi, soltiMe, soltiCen, luntiMe, lintiCen, suma;
    solTi = 150,000,000; //kilometros
    lunaTi = 384,400; //kilometros
    suma = solTi + lunaTi;
    printf("La suma de las sumas en kilometros: %i",suma);
    soltiMe = solTi * 1000;
    soltiCen = soltiMe * 1000;
    luntiMe = lunaTi * 1000;
    luntiCen = luntiMe * 1000;
    



    printf("\n\nEjercicio5");
    printf("\nSize of char: %i",sizeof(char));
    printf("\nSize of int: %i",sizeof(int));
    printf("\nSize of short int: %i",sizeof(short int));
    printf("\nSize of float: %i",sizeof(float));
    printf("\nSize of double: %i",sizeof(double));
    printf("\nSize of long double: %i",sizeof(long double));
    printf("\nSize of long int: %i",sizeof(long int));

    printf("\n\nEjercicio6");
    printf("\n456");
    printf("\n-456");
    printf("\n77777999999");
    printf("\n100000000000000");
    printf("\n-1x10^56");
    printf("\n-6x10^-79");
    printf("\n333333333333");
    printf("\n6777.56");
    printf("\n55^-2");
    printf("\n-0.55");
    printf("\n-0.0000000000005");

    return 0;
}