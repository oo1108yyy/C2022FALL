#include <stdio.h>
#include <math.h>
int main()
{
	int y, x, a, b, c;
	scanf_s("%d %d %d %d", &x, &a, &b, &c);
	if (sqrt(abs(x)) != 4 * a / (b * c))
		y = ((x + 2) * x + 3) * x + 1;
	printf("%d", y);
	if (sqrt(abs(x)) == 4 * a / (b * c))
		printf("NO");
	return 0;
}