#include <stdio.h>

#define UPPER (300)
#define LOWER (0)
#define STEP (20)

float FtoC(float f)
{
	float c;
	c = (5.0 / 9.0) * (f - 32.0);
	return c;
}

int main(void)
{
	float fahr,celsius;

	fahr = LOWER;

	printf("f     c \n");

	while(fahr <= UPPER)
	{
		celsius = FtoC(fahr);
		fahr += STEP;
		printf("%3.0f %6.1f\n", fahr,celsius);
	}

	return 0;
}