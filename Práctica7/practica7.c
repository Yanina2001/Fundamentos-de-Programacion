#include<stdio.h>
#include<stdlib.h>

    struct Juego{
        char nombreJuego[50];
        int edadMax ;
        int edadMin;
        int niveles;
        int partidasPosibles;
        int vidas;
        float precio;
        int jugadoresMax;
        int precioPaseBatalla;
        float precioUC;
    } ;

    void main(){
        
        struct Juego j1={"PUBG", 99, 18, 100, 1234, 1, 99.50, 4, 600, 200};
        struct Juego* ap=&j1;

        (*ap).precioUC=250.50;

        puts("Ingrese el nombre del juego: ");
        scanf("%s",&(ap->nombreJuego));
        
        puts("La edad maxima para jugar es: ");
        scanf("%d",&(ap->edadMax));

        puts("La edad minima para jugar es: ");
        scanf("%d",&(ap->edadMin));

        puts("La cantidad de niveles que hay son: ");
        scanf("%d",&(ap->niveles));

        puts("La cantidad de partidas posibles son: ");
        scanf("%d",&(ap->partidasPosibles));

        puts("La cantidad de vidas que hay son: ");
        scanf("%d",&(ap->vidas));

        puts("El precio del juego es: ");
        scanf("%f",&(ap->precio));

        puts("Cantidad de jugadores por partida: ");
        scanf("%d",&(ap->jugadoresMax));

        puts("El precio del pase de Batalla es: ");
        scanf("%d",&(ap->precioPaseBatalla));

        puts("El precio de UC es: ");
        scanf("%f",&(ap->precioUC));

        printf("\n\n\nEl nombre del juego es: %s\n",ap->nombreJuego);
        printf("La edad maxima para jugar es: %d\n",ap->edadMax);
        printf("La edad minima para jugar es: %d\n",ap->edadMin);
        printf("La cantidad de niveles que hay son: %d\n",ap->niveles);
        printf("La cantidad de partidas posibles son: %d\n",ap->partidasPosibles);
        printf("La cantidad de vidas que hay son: %d\n",ap->vidas);
        printf("El precio del juego es: %.2f\n",ap->precio);
        printf("Cantidad de jugadores por partida: %d\n",ap->jugadoresMax);
        printf("El precio del pase de Batalla es: %d\n",ap->precioPaseBatalla);
        printf("El precio de UC es: %.2f\n",ap->precioUC);
        
        printf("Dinero para pagar tu pase de batalla: %.2f\n",(*ap).precioUC);
    }   