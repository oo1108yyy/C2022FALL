#include <stdio.h>
int main()
{
    int a, b;
    scanf_s("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}