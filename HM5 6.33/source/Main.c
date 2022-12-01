#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binary_search(int key, int a[], int n)
{
	int low, high, mid, count = 0, count1 = 0;
	low = 0;
	high = n - 1;
	while (low < high)
	{
		count++;
		mid = (low + high) / 2;
		if (key < a[mid])
			high = mid - 1;
		else if (key > a[mid])
			low = mid + 1;
		else if (key == a[mid])
		{
			printf("���\!\n�d�� %d ��!a[%d]=%d", count, mid, key);
			count1++;
			break;
		}
	}
	if (count1 == 0)
		printf("����!�L����");
	return 0;
}
int main()
{
	int i, key, a[100], n;
	printf("�п�J���סG\n");
	scanf("%d", &n);
	printf("�п�J�Ʀr�G\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("�п�J�Q�d���Ʀr�G\n");
	scanf("%d", &key);
	binary_search(key, a, n);
	printf("\n");
	return 0;
}