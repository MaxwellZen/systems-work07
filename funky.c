#include<stdio.h>
#include<stdlib.h>

void printarr(int *arr, int n) {
	printf("[ ");
	int i;
	for (i=0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");
}

double average(int *arr, int n) {
	double sum = 0;
	int i;
	for (i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum / n;
}

void copyarr(int *a, int *b, int n) {
	int i;
	for (i=0; i < n; i++) b[i]=a[i];
}

int main() {
	int arr[5] = {6,9,4,2,0};
	printarr(arr, 5);
	printf("%f\n", average(arr, 5));
	int arr2[5];
	printf("Before copy:\n");
	printarr(arr2, 5);
	printf("After copy:\n");
	copyarr(arr, arr2, 5);
	printarr(arr2, 5);
}
