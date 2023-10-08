#include <stdio.h>

int main() {

    int numero;
    int pares = 0;
    int impares = 0;

 
    do {

        printf("Ingrese un numero (ingrese un numero negativo para terminar): ");
        scanf("%d", &numero);


        if (numero != 0) {
           
            if (numero % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }

    } while (numero >= 0);

    printf("Cantidad de numeros pares: %d\n", pares);
    printf("Cantidad de numeros impares: %d\n", impares);

    return 0;
}
