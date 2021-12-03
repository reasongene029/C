#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5


int main()
{
	int arr[SIZE] = {0};

	for (int i = 0; i < SIZE; i++)
	{
		printf("정수를 입력하시오: ");
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

	printf("최댓값: %d", MAX);
	printf("최솟값: %d", MIN);
	printf("합: %d", SUM);

	return 0;
}
