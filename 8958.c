#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char ans[80] = { NULL, };
		scanf("%s", ans);

		int j = 0;
		int sum = 0;
		int count = 0;
		while (ans[j] != NULL) {
			if (ans[j] == 'O') {
				if (count == 0) {
					sum += count + 1;
				}
				else if (count > 0) {
					sum += count + 1;
				}
				count++;
			}
			else if (ans[j] == 'X') {
				count = 0;
			}
			j++;
		}
		printf("%d\n", sum);
	}
}