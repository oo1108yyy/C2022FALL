//https://www.acwing.com/blog/content/27159/

#include <stdio.h>
int main()
{
	double x;
	scanf_s("%lf", &x);
	int n = x / 1500;
	double X=0;
	if (x > 2000)
	{
		switch (n)
		{
		default:
		case 3:
			X += (x - 4500) * 0.28;
			x = 4500;
		case 2:
			X += (x - 3000) * 0.18;
			x = 3000;
		case 1:
			X += (x - 2000) * 0.08;
		}
		printf("R$ %.2lf", X);
	}
	
	else
	printf("Isento");
	return 0;
}