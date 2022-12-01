#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int recursiveMaximum(int size);
int x;

int main(void)
{
	int i;
	printf("Input size <20\n");
	scanf("%d", &x);

	printf("max is %d\n", recursiveMaximum(x));

	system("pause");
	return 0;
}

int recursiveMaximum(int size)
{
	int i;
	int a[SIZE];

	for (i = 0; i < x; i++)
	{
		scanf("%d", &a[i]);
	}
	int max = a[x - 1];
	for (i = 0; i < x; i++)
	{
		if (a[i] > a[x - 1])
		{
			max = a[i];
			a[i] = a[x - 1];
			a[x - 1] = max;
		}
	}
	return max;
}