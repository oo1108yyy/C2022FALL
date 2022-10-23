//https://www.acwing.com/activity/content/582/
#include <stdio.h>
#define PI 3.14159
int main()
{
    double A, R;
    scanf_s("%lf", &R);
    A = PI * R * R;
    printf("A=%.4f", A);
    return 0;
}