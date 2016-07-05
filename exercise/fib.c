#include <stdio.h>

int fib(int n)
{
	int f = 0;
	int g = 1;

	int temp = n;
	while(n--)
	{
		g = g + f;
		f = g - f;
		printf("n = %d,g = %d,f = %d\n", temp - n,g,f);
	}
	return f;
}

int main(void)
{
	int num = 13;

	printf("fib(13) = %d\n", fib(num));
}