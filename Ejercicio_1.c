#include <stdio.h>

int main() {
    char frase[100];
    char letra;
    int contador = 0;

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == letra) {
            contador++;
        }
    }

    printf("La letra '%c' aparece %d veces en la frase.\n", letra, contador);

    return 0;
}
