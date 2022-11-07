//https://www.acwing.com/blog/content/27876/

#include <stdio.h>
int main()
{
	unsigned long count(int n);
	int n;

	scanf_s("%d", &n);


	printf("%d\n", count(n));

	return 0;
}


unsigned long count(int n)
{
	int N[21];
	N[1] = 1; N[2] = 2; N[3] = 4;
	int z=7;

	if (n <= 3)
	{
		return N[n];
	}
	for (int i = 4; i <= n; i++)
		{
		z = N[1] + N[2] + N[3];
		N[1] = N[2];
		N[2] = N[3];
		N[3] = z;

		}
		return z;
}