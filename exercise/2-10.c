#include <stdio.h>
#include <string.h>

#define TEST
#define ORIGINAL			0
#define SOLUTION			1
#define PORTABLE_SOLUTION	0


#if ORIGINAL
int lower(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return c + 'a' -'A';
	}
	else
	{
		return c;
	}
}
#endif

#if SOLUTION
int lower(int c)
{
	return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}
#endif

#if PORTABLE_SOLUTION
int lower(int c)
{
	char *Uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *Lowercase = "abcdefghijklmnopqrstuvwxyz";
	char *p = NULL;

	return NULL == (p = strchr(Uppercase,c)) ? c : *(Lowercase + (p - Uppercase));
}
#endif

#ifdef TEST
int main(void)
{
	char *test = "AaBbcCD3EdFGHgIJKLhM2NOjPQRkSTlUVWfXYf0Z1";
	char *p = test;
	int result = 0;
	while(*p != '\0')
	{
		result = lower(*p);
		printf("[%c] gives [%c]\n", *p,result);
		++p;
	}
	return 0;
}
#endif