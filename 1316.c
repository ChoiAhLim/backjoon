#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int result = 1;
	int count = 0;

	for (int i = 0; i < N; i++) {
		char str[101];
		scanf("%s", str);

		int re[26] = { 0, };

		for (int k = 0; str[k] != NULL; k++) {
			while (str[k] == str[k + 1]) {
				k++;
			}
			for (int j = 0; j < 26; j++) {
				if (str[k] == j + 97) {
					re[j]++;
					break;
				}
			}
		}

		for (int s = 0; s < 26; s++) {
			if (re[s] >= 2)
				result = 0;
		}

		if (result == 1)
			count++;

		result = 1;
	}

	printf("%d", count);
}