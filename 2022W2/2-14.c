//https://www.acwing.com/blog/content/26774/

#include <stdio.h>
int main()
{
    int number;
    scanf_s("%d", &number);
    if (number == 61 || number == 71 || number == 11 || number == 21 || number == 32 || number == 19 || number == 27 || number == 31)
    {
        if (number == 61) printf("Brasilia");
        else if (number == 71) printf("Salvador");
        else if (number == 11) printf("Sao Paulo");
        else if (number == 21) printf("Rio de Janeiro");
        else if (number == 32) printf("Juiz de Fora");
        else if (number == 19) printf("Campinas");
        else if (number == 27) printf("Vitoria");
        else printf("Belo Horizonte");

    }
    else printf("DDD nao cadastrado");
    return 0;
}