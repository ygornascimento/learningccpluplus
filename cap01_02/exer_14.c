#include <stdio.h>
#include <stdlib.h>

int main()
{
    char primeiraLetra, segundaLetra, terceiraLetra;

    printf("Digite os 3 caracteres: ");
    scanf("%c %c %c", &primeiraLetra, &segundaLetra, &terceiraLetra);
    printf("Primeira Letra: %c\nSegunda Letra: %c\nTerceira Letra: %c\n", primeiraLetra, segundaLetra, terceiraLetra);

    return 0;
}
