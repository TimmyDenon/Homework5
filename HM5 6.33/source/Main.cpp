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
	printf("�п�J���סG\n");
	scanf("%d", &n);
	printf("�п�J�Ʀr�G\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("�п�J�Q�d���Ʀr�G\n");
	scanf("%d", &key);
	int ret =binary_search(a,0,n-1,key);
	if (ret == -1)
		printf("�䤣��\n");
	else
		printf("�����ޭ�%d\n", ret+1);
	printf("\n");
	return 0;
}