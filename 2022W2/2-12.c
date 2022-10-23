//https://www.acwing.com/blog/content/26771/

#include <stdio.h>
#include<math.h>
int main()
{
    double a, b, c, R1, R2;
    scanf_s("%lf %lf %lf", &a, &b, &c);
    if ((b * b) - (4 * a * c) > 0 && a != 0)
    {
        R1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        R2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
        return 0;
    }
    else
        printf("Impossivel calcular");
    return 0;
}