#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int base, exp, power();
	printf("input a numbe as base:");
	scanf("%d", &base);
	printf("input a numbe as exp:");
	scanf("%d", &exp);

	printf("%d\n", power(base, exp));

	system("pause");
	return 0;
}

int power(int base, int exp)
{
	if (exp == 0)
		return 1;
	else
	{
		exp--;
		return  base * power(base, exp);
	}
	
}