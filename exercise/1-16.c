#include <stdio.h>

#define MAXLINE 1000

int myGetline(char line[],int maxline);
void copy(char to[],char from[]);

int main(void)
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while((len = myGetline(line,MAXLINE)) > 0)
	{
		printf("%d : %s", len,line);

		if(len > max)
		{
			max = len;
			copy(longest,line);
		}
	}

	if(max > 0)
	{
		printf("Longest is %d character:\n %s", max,longest);
	}

	printf("\n");

	return 0;
}

int myGetline(char line[],int maxline)
{
	int c,i,j;
	for(i = 0,j = 0;(c = getchar()) != EOF && c != '\n';i++)
	{
		if( i < maxline - 1)
		{
			line[j++] = c;
		}
	}

	if(c == '\n')
	{
		if(i <= maxline - 1)
		{
			line[j++] = c;
		}
		i++;
	}

	line[j] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
	{
		++i;
	}
}


