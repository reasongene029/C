#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5


int main()
{
	int arr[SIZE] = {0};

	for (int i = 0; i < SIZE; i++)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &arr[i]);
	}

	int MAX, MIN, SUM;
	MAX = MIN = SUM = arr[0];

	for (int i = 1; i < SIZE; i++)
	{
		SUM += arr[i];
		if (MAX < arr[i])
			MAX = arr[i];
		if (MIN > arr[i])
			MIN = arr[i];
	}

	printf("�ִ�: %d", MAX);
	printf("�ּڰ�: %d", MIN);
	printf("��: %d", SUM);

	return 0;
}
