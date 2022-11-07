//https://www.acwing.com/blog/content/27988/

#include <stdio.h>
int main()
{
    int N[20];
    for (int i = 0; i <= 19; i++)
    {
        scanf_s("%d", &N[i]);
    }
    for (int z = 19, i = 0; z >= 0; z--, i++)
    {
        printf("N[%d] = %d\n", i, N[z]);
    }
    return 0;
}