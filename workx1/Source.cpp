#include<stdio.h>
int main() {
	int n, num[99], i, sum = 0;
	printf("Enter count : ");
	scanf_s("%d", &n);
	for (i = 0;i < n;i++) {
		printf("Enter number : ");
		scanf_s("%d", &num[i]);
		sum += num[i];
	}
	printf("sum : %d\n", sum);
	printf("average : %d\n", sum / n);
	return 0;
}