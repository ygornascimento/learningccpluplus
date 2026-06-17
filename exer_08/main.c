#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero01, numero02;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero01);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero02);

    printf("Números invertidos: %d %d", numero02, numero01);

    return 0;
}
