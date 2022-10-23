// https://www.acwing.com/blog/content/26769/

#include <stdio.h>
int main()
{
    int h, min, s, t;
    scanf_s("%d", &s);
    min = s / 60;
    s = s % 60;
    h = min / 60;
    min = min % 60;
    printf("%d:%d:%d", h, min, s);
    return 0;
}