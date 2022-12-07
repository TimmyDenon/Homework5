#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int binary_search(int a[],int low,int high, int key)
{
	if (low > high) {
		return -1;
	}

	int mid = int((low + high) / 2);
	if (key == a[mid])
		return mid;
	else if (key > a[mid]) {
		low = mid + 1;
		return binary_search(a, low, high, key);
	}
	else {
		high = mid - 1;
		return binary_search(a, low, high, key);
	}
}
int main()
{
	int key, a[100], n;
	printf("請輸入長度：\n");
	scanf("%d", &n);
	printf("請輸入數字：\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("請輸入想查的數字：\n");
	scanf("%d", &key);
	int ret =binary_search(a,0,n-1,key);
	if (ret == -1)
		printf("找不到\n");
	else
		printf("找到索引值%d\n", ret+1);
	printf("\n");
	return 0;
}