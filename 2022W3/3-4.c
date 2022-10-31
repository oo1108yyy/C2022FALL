#include<stdio.h>
int is_pow2(int n)
{
	while(n > 0)
	{
		int a;
		a = n % 2;
		if (a == 1)
		{
			break;
		}
		n = n / 2;
	}
	if (n == 0)
		return 0;
	else
		return -1;
}
int main()
{
	int x;
	scanf_s("%d", &x);
	printf("%d", is_pow2(x));
	return 0;
}
