#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char capital_letter;
	printf("input a capital letter:");
	scanf("%c", &capital_letter);

	capital_letter = capital_letter + 32;
	printf("%c\n", capital_letter);


	system("pause");
	return 0;
}