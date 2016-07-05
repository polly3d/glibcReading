#include <stdio.h>

int main(void)
{
	int c,pc;

	pc = EOF;

	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			if(c != pc)
				putchar();
		}

		if(c != ' ')
			putchar();

		pc = c;
	}

	return 0;
}