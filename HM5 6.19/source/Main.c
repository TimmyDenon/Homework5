#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int z[36000];
int x, y;
double count;
int main() {
	srand(time(NULL));
	for (int i = 0;i < 36000;i++) {
		x = rand() % 6 + 1;
		y = rand() % 6 + 1;
		z[i] = x + y;
		if (z[i] == 7)
			count++;
	}
	for (int j = 1;j <= 36000;j++) {
		if (j % 10 == 0)
			printf("\n");
		printf(" %d\t", z[j - 1]);
	}
	printf("\n7出現的機率為%.2f%%", count / 36000 * 100);
}