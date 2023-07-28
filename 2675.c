#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		int R;
		char S[20] = { NULL, };
		scanf("%d %s", &R, S);

		for (int j = 0; S[j]; j++) {
			for (int k = 0; k < R; k++) {
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
}