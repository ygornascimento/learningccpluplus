#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int numero;
    float numeroComPonto;

    printf("Digite o valor da variável CHAR: ");
    scanf("%c", &letra);

    printf("Digite o valor da variável INT: ");
    scanf("%d", &numero);

    printf("Digite o valor da vaiável FLOAT: ");
    scanf("%f", &numeroComPonto);

    printf("Por espaços: %c %d %f\n", letra, numero, numeroComPonto);
    printf("Por tabulação: %c   %d  %f\n",letra, numero, numeroComPonto);
    printf("Por linha: \n%c \n %d\n %f\n",letra, numero, numeroComPonto);

    return 0;
}
