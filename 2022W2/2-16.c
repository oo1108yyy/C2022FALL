// https://www.acwing.com/blog/content/26776/

#include <stdio.h>
int main()
{
    int A, N, x, sum;
    scanf_s("%d %d", &A, &N);
    while (N <= 0)
    {
        scanf_s("%d", &N);
    }
    sum = A;
    for (int i = 1; i < N; i++)
    {
        x = ++A;
        sum += x;
    }
    printf("%d", sum);
    return 0;
}
