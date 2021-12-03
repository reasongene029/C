#include <stdio.h>

int main()
{
	char arr[] = { 'G', 'O', 'O', 'D',' ', 'T', 'I', 'M', 'E' };

	int arrLen = sizeof(arr) / sizeof(char);

	for (int i = 0; i < arrLen; i++)
		printf("%c", arr[i]);

	return 0;
}