//https://www.acwing.com/blog/content/27990/

#include <stdio.h>
int main()
{
    double A[99];
    for (int i = 0; i < 100; i++)
    {
        scanf_s("%lf", &A[i]);
        if (A[i] <= 10)
        {
            printf("A[%d] = %.1lf\n", i, A[i]);
        }
    }
    return 0;
}