#include<stdio.h>

int main() {
	int image[4][4] = {{1, 0, 1, 0}, {0, 1, 0, 1}, {1, 1, 0, 0}, {0, 0, 1, 1}};
	int invimage[4][4];
	int count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (image[i][j] == 1) {
				invimage[i][j] = 0;
				count+= 1;
			} else {
				invimage[i][j] = 1;
			}
		}
	}
	printf("Original Image:        Inverted Image:\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", image[i][j]);
		}
		printf("         |      ");
		for (int j = 0; j < 4; j++) {
			printf("%d ", invimage[i][j]);
		}
		printf("\n");
	}

	printf("\nWhite pixels in original image = %d\n", count);

	return 0;
}
