#include <stdio.h>
#include <math.h>

int main() {

    /*EJERCICIO1
    Realice un diagrama de flujo y el código en C que, al recibir como dato del usuario 
    el precio de un producto importado, incremente el IVA al precio si es que es mayor que $4000, 
    y 5% si fuera menor o igual a dicho precio. Se debe mostrarel nuevo precio del producto.*/
    
    float precio, pretot, preIv;
    int x;
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


    //EJERCICIO2

    //EJERCICIO3
    float var;
    printf("Digite un valor para la variable z: ");
    scanf("%f",&var);

    //EJERCICIO3
    int resul=0, Factorial;
    printf("Digite el numero para calcular el factorial: ");
    scanf("%d",&Factorial);
    resul = 1;
    while(Factorial > 1){
        resul *= Factorial;
        printf("%d *",Factorial);
        Factorial --;
    }
    printf("1 = %d\n\n", resul);

    

    //EJERCICIO4

    return 0;
}