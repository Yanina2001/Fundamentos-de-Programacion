/*
Las princesas no trabajan
De Luna Ocampo Yanina
Reyes Acevedo Fernando Adad
1AM1
Ciencias de Datos
16/05/2021
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void concat(char c1[50], char c2[50], char c3[100]){
int i=0,j=0;
    do{
        c3[i]= c1[i];
        i++;}
    while(c1[i]!='\0');

    do{
        c3[i]=c2[j];
        i++;
        j++;}
    while(c2[j-1]!='\0');
}

int main(){

char c1[51], c2[51], c3[102]; 
    printf("Digite una cadena de no mas de 50 caracteres: \n");
    scanf("%s", c1);
    printf("Digite una cadena de no mas de 50 caracteres: \n");
    scanf("%s", c2);
    concat(c1, c2, c3);
    printf("%s", c3);
}

