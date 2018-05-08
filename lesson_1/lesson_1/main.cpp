#include <stdio.h>
#include <conio.h>

unsigned int fact1(int);
int fact2(int);

void main() {
	/*int a = 5;
	int b = 2;

	int c = a + b;
	int m = a * b;
	int r = a - b;
	int g = a % b;
	int f = ++a;

	float d = float(a) / b;

	printf("f = %d\n", f);
	printf("c = %d\n", c);
	printf("m = %d\n", m);
	printf("r = %d\n", r);
	printf("d = %f\n", d);
	printf("g = %d\n", g);*/

	printf("fact1 = %d\n", fact1(32));
	printf("fact2 = %d\n", fact2(5));

	getche();
}

unsigned int fact1(int n)
{
	unsigned int f = 1;
	for (int i = 1; i <= n; ++i)
	{
		f *= i;
	}

	return f;
}

int fact2(int n)
{
	if (n == 1)
		return n;

	return fact2(n - 1) * n;
}