#include <stdio.h>

#define MAX_LINE (1024)

#define CDA_CARD(arr) (sizeof((arr))/sizeof(*(arr)))

void reverse(char s[])
{
	int length;
	length = CDA_CARD(s);
	length -= 2;

	int i,j;
	i = 0;
	j = length;
	while(i < length)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}


int myGetLine(char s[],int lim)
{
	int i,c;
	i = c = 0;
	while(i < lim - 1 && (c = getchar()) != EOF && c != '\n')
	{
		s[i++] = c;
	}

	if(c == '\n')
	{
		s[i++] = c;
	}

	s[i] = '\0';
	return i;
}


int main(void)
{
	char line[MAX_LINE];

	while(myGetLine(line,MAX_LINE) > 0)
	{
		reverse(line);
		printf("%s\n", line);
	}

	return 0;

}






