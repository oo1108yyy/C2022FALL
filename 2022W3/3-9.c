//https://www.acwing.com/blog/content/26779/

#include <stdio.h>
int main()
{
	double N;
	int a, b, c, d, e, f, g, h, i, j, k, l;
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11;
	scanf_s("%lf", &N);
	int y = 100 * N;
	a = y / 10000;
	x1= y %10000;
	b = x1/ 5000;
	x2= x1% 5000;
	c = x2/ 2000;
	x3 = x2 % 2000;
	d = x3 / 1000;
	x4 = x3 % 1000;
	e = x4/ 500;
	x5 = x4 % 500;
	f  = x5 / 200;
	x6 = x5 % 200;
	g = x6/ 100;
	x7 = x6 % 100;
	h = x7/ 50;
	x8 = x7 % 50;
	i = x8/ 25;
	x9 = x8 % 25;
	j = x9 / 10;
	x10 = x9 % 10;
	k = x10 / 5;
	x11= x10 % 5;
	l = x11 / 1;
	printf("NOTAS: \n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", a, b, c, d, e, f, g, h, i, j, k, l);
	return 0;

}