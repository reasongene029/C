#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[10] = {NULL};

	printf("���ܾ �Է��Ͻÿ�: ");
	scanf("%s", arr);

	int arrLen = 0;

	while (arr[arrLen] != '\0')
		arrLen++;

	printf("���ܾ��� ����: %d", arrLen);

	return 0;
}