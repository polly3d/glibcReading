#include <stdio.h>
#include <time.h>

int binsearch(int x,int v[],int n);
int binsearch2(int x,int v[],int n);

#define MAX_ELEMENT 200000

int main(void)
{
	int test[MAX_ELEMENT];
	int index;
	int n = 50;
	int i;
	clock_t time_token;

	for (int i = 0; i < MAX_ELEMENT; ++i)
	{
		test[i] = i;
	}

	time_token = clock();
	for (int i = 0; i < 100000; ++i)
	{
		index = binsearch(n,test,MAX_ELEMENT);	
	}

	if(index < 0)
		printf("Element %d not found.\n", n);
	else
		printf("Element %d found at index %d .\n", n,index);

	printf("binsearch() took %lu clocks (%lu seconds)\n", (unsigned long) time_token,(unsigned long) time_token / CLOCKS_PER_SEC);

	return 0;
}

int binsearch(int x,int v[],int n)
{
	int low,mid,height;
	low = 0;
	height = n - 1;
	while(low <= height)
	{
		mid = (low + height) / 2;
		if(x < v[mid])
		{
			height = mid - 1;
		}
		else if(x > v[mid])
		{
			low = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;

}