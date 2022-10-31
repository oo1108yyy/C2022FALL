#include<stdio.h>
int fac_bit_count(int n)
{
	int y = 0;
	for (int x = n; n > 1; n--)
	{
		x = n - 1;
		y += x * n;
	}
	int z;
	z = y / 10;
	int sum = 1;
	if (z > 0)
	{
		for (int sum = 1; z > 0; sum++)
		{
			z = z / 10;
		}
		printf("%d", sum);
		return sum;
	}
	else
		printf("%d", sum);
	return sum;

}
int main()
{
	int a;
	scanf_s("%d", &a);
	printf("%d", fac_bit_count(a));
	return 0;
}