#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int n;
	void example_1();

	printf("�п�Jn:");
	scanf("%d", &n);
	example_1(n, 'A', 'B', 'C');

	system("pause");
	return 0;
}
void example_1(int n, char A, char B, char C) {
	if (n == 1) {
		printf("�L�l�q%c����%c\n", A, C);
	}
	else {
		example_1(n - 1, A, C, B);
		printf("�L�l�q%c����%c\n", A, C);
		example_1(n - 1, B, A, C);
	}
}
