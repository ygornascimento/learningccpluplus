#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;

    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mês: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);
    printf("Data digitada: %d/%d/%d", dia, mes, ano);

    return 0;
}
