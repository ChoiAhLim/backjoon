#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float n1;
	scanf("%f", &n1);

	for (int i = 0; i < n1; i++) {
		float n2;
		scanf("%f", &n2);

		int temp[1000];
		float sum = 0;
		for (int j = 0; j < n2; j++) {
			scanf("%d", &temp[j]);
			sum += temp[j];
		}

		float avg;
		avg = sum / n2;
		int count = 0;
		for (int j = 0; j < n2; j++) {
			if (temp[j] > avg) count++;
		}
		float t;
		t = count * 100 / n2;
		printf("%.3f%%\n", t);
	}
}