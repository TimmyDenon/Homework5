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
			printf("成功!\n查找 %d 次!a[%d]=%d", count, mid, key);
			count1++;
			break;
		}
	}
	if (count1 == 0)
		printf("失敗!無此數");
	return 0;
}
int main()
{
	int i, key, a[100], n;
	printf("請輸入長度：\n");
	scanf("%d", &n);
	printf("請輸入數字：\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("請輸入想查的數字：\n");
	scanf("%d", &key);
	binary_search(key, a, n);
	printf("\n");
	return 0;
}