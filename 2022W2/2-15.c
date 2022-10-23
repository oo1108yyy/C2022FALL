//https://www.acwing.com/blog/content/26775/

#include <stdio.h>
int main()
{
    int n, a = 2, b = 3;
    scanf_s("%d", &n);
    if (n == 1) printf("0");
    else if (n == 2) printf("0 1");
    else if (n == 3) printf("0 1 1");
    else if (n >= 4)
    {
        printf("0 1 1 ");
        for (int i = 4; i <= n; i++)
        {
            if (i % 2 == 0) {
                printf("%d ", a);
                a = a + b;
            }
            else if (i % 2 == 1) {
                printf("%d ", b);
                b = b + a;
            }
        }
    }
    return 0;
}
