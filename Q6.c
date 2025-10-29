#include <stdio.h>

int main() {
	int i, j;
	int n = 5;

	for (i = 1; i <= n; i++) {
		for (j = i; j < n; j++) {
			printf("  ");
		}
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		for (j = i; j < n; j++) {
			printf("  ");
		}
		for (j = 1; j <= i; j++) {
			printf("%d ", j);
		}

		printf(" | ");

		for (j = i; j < n; j++) {
			printf("  ");
		}
		for (j = 1; j <= i; j++) {
			printf("%c ", 'A' + j - 1);
		}

		printf("\n");
	}

	return 0;
}

