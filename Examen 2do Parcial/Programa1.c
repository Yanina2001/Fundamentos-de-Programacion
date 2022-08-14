#include <stdio.h>
#include <stdlib.h>

typedef struct{
  char   complexion [30];
  char   color [80];
  int    altura;
  int    peso;
  char   genero[30];
}Caracteristicas Fisicas;

typedef struct{
  char   complexion [30];
  char   color [80];
  int    altura;
  int    peso;
  char   genero[30];
}Vestiduras;

typedef struct{
  Caracteristicas Fisicas Rasgos;
  Vestiduras Ropa;
  char      Nombre [30];
    } Personaje;


int main(){
    Personaje b;
    Personaje* p = &b;

    puts("---TDA Personaje---\nComplexion:");
    scanf("%s",(p->Ropa.complexion));
    puts("Color:");
    scanf("%s",(p->Ropa.color));
    puts("Altura:");
    scanf("%s",(p->Ropa.genero));
    puts("Peso:");
    scanf("%d",(p->Ropa.peso));
    puts("Genero:");
    scanf("%s",(p->biela));
    puts("Cadena:");
    scanf("%s",(p->cadena));
    puts("Frenos:");
    scanf("%s",(p->frenos));
    puts("Llanta.material:");
    scanf("%s",(p->llanta.material));
    puts("Llanta.rodada:");
    scanf("%d",&(p->llanta.rodada));
    puts("Marca:");
    scanf("%s",(p->marca));
    puts("Precio:");
    scanf("%d",&(p->precio));

    puts("\nBicicleta Elegida: ");
    printf("Manubrio: %s\n",p->manubrio);
    printf("Asiento: %s\n",p->asiento);
    printf("Cuadro: %s\n",p->cuadro);
    printf("Pedal: %s\n",p->pedal);
    printf("Biela: %s\n",p->biela);
    printf("Cadena: %s\n",p->cadena);
    printf("Frenos: %s\n",p->frenos);
    printf("Llanta.material: %s\n",p->llanta.material);
    printf("Llanta.rodada: %d\n",p->llanta.rodada);
    printf("Marca: %s\n",p->marca);
    printf("Precio: %d\n",p->precio);

    return EXIT_SUCCESS;
}