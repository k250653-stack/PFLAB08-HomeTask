#include<stdio.h>
int main() {
	int c1 [4] = {85,92,78,90};
	int c2 [4] = {88,76,95,84};
	int c3 [4] = {90,85,88,92};
	float sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 0; i<4 ; i++) {
		sum1 += c1[i];
	}
	for (int i = 0; i<4 ; i++) {
		sum2 += c2[i];
	}
	for (int i = 0; i<4 ; i++) {
		sum3 += c3[i];
	}
	printf("Average score for Class 1 is %.2f\n", (sum1/4));
	printf("Average score for Class 2 is %.2f\n", (sum2/4));
	printf("Average score for Class 3 is %.2f\n", (sum3/4));
	return 0;
}
