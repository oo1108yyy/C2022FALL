#include <stdio.h>
int main()
{
	int a, b, c,d;
	scanf_s("%d %d %d", &a, &b, &c);
	d = a ^ b % c;
	printf("%d", d);
	return 0;
}