// https://www.acwing.com/blog/content/26777/

#include <stdio.h>
int main()
{
    int N;
    scanf_s("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
            printf("%d\n", i);

    }
    return 0;
}