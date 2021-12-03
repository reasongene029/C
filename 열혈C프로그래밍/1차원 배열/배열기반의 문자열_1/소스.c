#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[10] = {NULL};

	printf("영단어를 입력하시오: ");
	scanf("%s", arr);

	int arrLen = 0;

	while (arr[arrLen] != '\0')
		arrLen++;

	printf("영단어의 길이: %d", arrLen);

	return 0;
}