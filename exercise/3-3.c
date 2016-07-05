#include <stdio.h>
#include <string.h>

void expand(char *s1,char *s2);

int main(void)
{
	char *s[] = 
	{
		"a-z-",
		"z-a-",
		"-1-6-",
		"a-ee-a",
		"a-R-L",
		"1-9-1",
		"5-5",
		NULL
	};

	char result[100];
	int i = 0;
	while(s[i])
	{
		expand(result, s[i]);
		printf("Unexpanded:%s\n", s[i]);
		printf("Expand: %s\n", result);
		++i;
	}
	return 0;
}


void expand(char *s1, char *s2)
{
	static char upper_alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	static char lower_alph[] = "abcdefghijklmnopqrstuvwxyz";
	static char digits[] = "0123456789";

	char *start, *end, *p;

	int i = 0;
	int j = 0;

	while(s2[i])
	{
		switch(s2[i])
		{
			case '-':
				if(i == 0 || s2[i + 1] == '\0')
				{
					s1[j++] = '-';
					++i;
				}
				else
				{
					if((start = strchr(upper_alph,s2[i - 1])) && (end = strchr(upper_alph,s2[i + 1])))
						;
					else if((start = strchr(lower_alph,s2[i - 1])) && (end = strchr(lower_alph,s2[i + 1])))
						;
					else if((start = strchr(digits,s2[i - 1])) && (end = strchr(digits,s2[i + 1])))
						;
					else
					{
						fprintf(stderr, "EX3_3:Mismatched operands '%c - %c'\n", s2[i - 1],s2[i + 1]);
						s1[j++] = s2[i - 1];
						s1[j++] = s2[i++];
						break;
					}

					p = start;
					while(p != end)
					{
						if(end > start)
							++p;
						else
							--p;
						s1[j++] = *p;
					}
					i += 2;
				}
				break;
			default:
				if(s2[i + 2] == '-' && s2[i + 2] != '\0')
				{
					++i;
				}
				else
				{
					s1[j++] = s2[i++];
				}
				break;

		}
	}
	s1[j] = s2[i];
}