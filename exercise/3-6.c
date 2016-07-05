#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

void itob(int n,char s[],int b);
void reverse(char s[]);


int main(void)
{
	char buffer[20];

	itob(INT_MIN,buffer,7);
	printf("Decimal : %s\n", buffer);
}

void itob(int n,char s[],int width)
{
	int i, sign;


	if((sign = n) < 0)
	{
		n = -n;
	}

	i = 0;

	do
	{
		s[i++] = n % 10 + '0';
	}
	while((n /= 10) > 0);

	if(sign < 0)
	{
		s[i++] = '-';
	}
	s[i] = '\0';
	reverse(s);
}

void reverse(char s[])
{
	int c,i,j;
	for(i = 0, j = strlen(s) - 1;i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
