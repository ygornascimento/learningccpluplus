#include <stdio.h>
#include <stdlib.h>

//Na conversão de tipos, durante a atribuição, pode haver perda de informação.
int main() { 
    int x = 65;
    char ch;
    float f = 25.1;

    //ch recebe 8 bits menos significativos de x
    //converte para a tabela ASCII
    ch = x;
    printf("ch = %c\n", ch);

    //x recebe parte apenas da parte inteira de f
    x = f;
    printf("x = %d\n", x);

    //f recebe valor de 8bits convertido para real
    f = ch;
    printf("f = %f\n", f);

    //f recebe o valor de x
    f = x;
    printf("f = %f\n", f);

    return 0;
}