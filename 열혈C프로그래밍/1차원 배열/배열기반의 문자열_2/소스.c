#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char voca[10] = {NULL};
	int len = 0;
	char temp;

	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != '\0')
		len++;

	for (int i = 0; i < len / 2; i++)
	{
		temp = voca[i];
		voca[i] = voca[(len - i)-1];
	    voca[(len - i)-1] = temp;
	}

	printf("%s", voca);

	return 0;
}