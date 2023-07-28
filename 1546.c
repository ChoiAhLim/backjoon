#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	float a[1000] = { 0, };
	int max = -1;
	for (int i = 0; i < n; i++) {
		scanf("%f", &a[i]);

		if (max < a[i]) max = a[i];
	}

	float sum = 0;
	for (int i = 0; i < n; i++) {
		a[i] = (a[i] / max) * 100;
		sum = sum + a[i];
	}

	printf("%f", sum/n);

	return  0;
}