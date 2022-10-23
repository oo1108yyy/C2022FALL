//https://www.acwing.com/blog/content/26766/

#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf_s("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        d = a;
        a = b;
        b = d;
    }
    if (a < c)
    {
        d = a;
        a = c;
        c = d;
    }
    printf("%d eh o maior", a);
    return 0;
}