//https://www.acwing.com/file_system/file/content/whole/index/content/7003416/

#include <stdio.h>
int main()
{
    int A, B;
    scanf_s("%d %d", &A, &B);
    if (A % B == 0 || B % A == 0)
        printf("Sao Multiplos");
    else
        printf("Nao sao Multiplos");
    return 0;
}