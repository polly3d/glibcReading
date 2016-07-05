#include <stdio.h>
#include <string.h>

int any(char s1[],char s2[])
{
	int i,j,pos;

	pos = -1;
	for(i = 0; pos == -1 && s1[i] != '\0'; i++)
	{
		for(j = 0; pos == -1 && s2[j] != '\0'; j++)
		{
			if(s2[j] == s1[i])
			{
				pos = i;
			}
		}
	}

	return pos;
}

int any2(char *s1,char *s2)
{
	char arr[256] = {0};

	while(*s2 != '\0')
	{
		arr[*s2] = 1;
		s2++;
	}

	int i = 0;
	while(s1[i] != '\0')
	{
		if(arr[s1[i]])
		{
			return i;
		}
		i++;
	}

	return -1;

}

int main(void)
{
	char *leftStr[] = 
	{
		"a",
		"antidisestablishmentarianism",
		"beautifications",
		"characteristically",
		"deterministically",
		"electroencephalography",
		"familiarisation",
		"gastrointestinal",
		"heterogeneousness",
		"incomprehensibility",
		"justifications",
		"knowledgeable",
		"lexicographically",
		"microarchitectures",
		"nondeterministically",
		"organizationally",
		"phenomenologically",
		"quantifications",
		"representationally",
		"straightforwardness",
		"telecommunications",
		"uncontrollability",
		"vulnerabilities",
		"wholeheartedly",
		"xylophonically", /* if there is such a word :-) */
		"youthfulness",
		"zoologically"
	};

	char *rightStr[] = 
	{
		"", 
		"a",
		"the",
		"quick",
		"brown",
		"dog",
		"jumps",
		"over",
		"lazy",
		"fox",
		"get",
		"rid",
		"of",
		"windows",
		"and",
		"install",
		"linux"	
	};

	size_t numLefts = sizeof(leftStr) / sizeof(*leftStr);
	size_t numRight = sizeof(rightStr) / sizeof(*rightStr);

	size_t left,right;
	left = right = 0;

	int passed = 0;
	int failed = 0;

	int pos = -1;
	char *ptr = NULL;

	for(left = 0; left < numLefts; left++)
	{
		for(right = 0; right < numRight; right++)
		{
			pos = any2(leftStr[left],rightStr[right]);
			ptr = strpbrk(leftStr[left],rightStr[right]);

			if(pos == -1)
			{
				if(ptr != NULL)
				{
					printf("Test %zu/%zu failed.\n", left,right);
					++failed;
				}
				else
				{
					printf("Test %zu/%zu passed.\n", left,right);
					++passed;
				}
			}
			else
			{
				if(ptr == NULL)
				{
					printf("Test %zu/%zu failed.\n", left,right);
					++failed;
				}
				else
				{
					if(ptr - leftStr[left] == pos)
					{
						printf("Test %zu/%zu passed.\n", left,right);
						++passed;
					}
					else
					{
						printf("Test %zu/%zu failed.\n", left,right);
						++failed;
					}
				}
			}
		}
	}

	printf("\n\nTotal passed %d, fails %d,total test %d\n",passed,failed,passed + failed);
}
