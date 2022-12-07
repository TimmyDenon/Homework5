#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
int recursiveMaximum(int data[],int size);
int x;
int max, i;

int main(void)
{
	int i;
	int a[SIZE];
	printf("Input size <20\n");
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("max is %d\n", recursiveMaximum(a,x));

	system("pause");
	return 0;
}

int recursiveMaximum(int data[],int size)
{	
	if (i == size)
		return max;
	if (max<data[i]) {
		max = data[i];
		i++;
		recursiveMaximum(data, size);
	}
	else {
		i++;
		recursiveMaximum(data, size);
	}
}