#include <stdio.h>

int main()
{
    int a,b,c;

    printf(" Vamos calcular a area de um triangulo! \n\n Digite a base do triangulo: ");
    scanf("%d", &a);
    printf(" Digite a altura do triangulo: ");
    scanf("%d", &b);
    c=a*b/2;
    printf("\n A area deste triangulo e: %d\n", c);
    return 0;
}
