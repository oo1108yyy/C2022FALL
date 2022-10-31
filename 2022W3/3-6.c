#include <stdio.h>
int GCD_recursive(int m, int n)
{
    int temp;
    if (m < n)
    {
        temp = n;
        n = m;
        m = temp;
    }
    if (n == 0)
        return m;
    else
        return GCD_recursive(m % n, n);
}
int main()
{
    int a, b;
    scanf_s("%d%d", &a, &b);
    printf("%d", GCD_recursive(a, b));
    return 0;
}

