#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, n;
	int arr[10] = { 0, };
	for (int i = 0; i < 10; i++) {
		scanf("%d", &A);
		n = A % 42;

		arr[i] = n;
	}

	int c[42] = { 0, };
	int count = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 42; j++) {
			if (arr[i] == j) c[j]++;
		}
	}
	for (int i = 0; i < 42; i++) {
		if (c[i] >= 1) count++;
	}
	printf("%d", count);
	return 0;
}