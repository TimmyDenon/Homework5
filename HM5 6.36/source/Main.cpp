#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void reverseSentence();

int main()
{
	printf("��J�@�Ӧr��: ");
	reverseSentence();

	return 0;
}

void reverseSentence()
{
	char c;
	scanf("%c", &c);

	if (c != '\n')
	{
		reverseSentence();
		printf("%c", c);
	}
}