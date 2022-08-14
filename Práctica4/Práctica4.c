#include <stdio.h>
#include <math.h>

int main() {

    /*EJERCICIO1
    Realice un diagrama de flujo y el código en C que, al recibir como dato del usuario 
    el precio de un producto importado, incremente el IVA al precio si es que es mayor que $4000, 
    y 5% si fuera menor o igual a dicho precio. Se debe mostrarel nuevo precio del producto.*/
    float preIv;
    float precio, pretot;
    printf("Digite el precio del producto importado: ");
    scanf("%f",&precio);
    if(precio > 4000.0){
        preIv = precio * 0.16;
        pretot = preIv + precio;
        printf("El nuevo precio del producto es: %0.2f", pretot);
    } else {
        preIv = precio * 0.5;
        pretot = preIv + precio;
        printf("El nuevo precio del producto es: %0.2f", pretot);
    }

    return 0;
}