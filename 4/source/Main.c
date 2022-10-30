#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main() {
	int N;
	unsigned long int  number[100000];
	printf("請輸入要顯示多少個費斯數列:");
	scanf("%d", &N);
	number[0] = 0;
	number[1] = 1;
	number[2] = 1;
	printf("%lu\n", number[0]);
	printf("%lu\n", number[1]);
	printf("%lu\n", number[1]);
	for (int i = 3; i <= N; i++)
	{
		number[i] = number[i - 1] + number[i - 2];
		printf("%lu\n", number[i]);
	}

	system("pause");
	return 0;
}