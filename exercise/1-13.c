#include <stdio.h>

#define MAXWORDLEN 10 //最大长度

int main(void)
{
	int c;
	int lengthArr[MAXWORDLEN + 1] = {0};
	int wordlength = 0;
	int maxlength = 0;
	int nowlength = 0;

	int isdone = 0;
	int inspace = 0;

	//接下来的问题，就是怎样将不同的长度存入数组和获得最大长度值
	while(isdone == 0)
	{
		c = getchar();
		if(c == ' ' || c == '\t' || c == '\n' || c == EOF)
		{
			if(inspace == 0)
			{
				inspace = 1;
				if(wordlength <= MAXWORDLEN)
				{
					if(wordlength > 0)
					{
						nowlength = ++lengthArr[wordlength - 1];
					}
				}
				else
				{
					nowlength = ++lengthArr[MAXWORDLEN];
				}
				if(nowlength > maxlength)
				{
					maxlength = nowlength;
				}
			}

			if(c == EOF)
			{
				isdone = 1;
			}
		}
		else
		{
			if(inspace == 1)
			{
				inspace = 0;
				wordlength = 0;
			}
			wordlength++;
		}
	}

	for (int i = maxlength; i > 0; i--)
	{
		printf("%4d| ",i);

		//插入数据*号
		for (int j = 0; j <= MAXWORDLEN; ++j)
		{
			if(lengthArr[j] == i)
			{
				printf("*");
			}
			else
			{
				printf(" ");//如果匹配，则标*，如果匹配则空格占位
			}
			printf("  ");//占位
		}

		printf("\n");
	}

	//x轴
	printf("    +");//4 spaces
	for(int i = 0; i <= MAXWORDLEN; ++i)
	{
		printf("---");
	}
	printf("\n");

	printf("     ");//5 spaces
	for (int i = 0; i < MAXWORDLEN; ++i)
	{
		printf("%2d ", i + 1);//2 spaces
	}

	printf(">%d\n", MAXWORDLEN);

	return 0;
}