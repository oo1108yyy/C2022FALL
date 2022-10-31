//https://www.acwing.com/blog/content/27489/


#include <stdio.h>
int main()
{
	int n, x = 2, z;
	long long y = 1;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &z);
		for (x; x <= z / 2; x++);
		{
			if (z % x == 0)
			{
				y += x;
				if (x / z != x)
					y += z / x;
				else
					y += 0;
			}

		}
		if (y = z && z != 1)
			printf("%d is perfect\n", z);
		else
			printf("%d is not perfect\n", z);
	}
	return 0;
}



