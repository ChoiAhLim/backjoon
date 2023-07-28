#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char arr[1000000] = { NULL, };
	scanf("%s", arr);

	int al[26] = { 0, };

	int temp;
	for (int i = 0; arr[i] != NULL; i++) {
		for (int j = 65; j < 97; j++) {
			if (arr[i] == j || arr[i] == j + 32) {
				temp = j - 65;
				al[temp]++;
				break;
			}
		}
	}

	int max = -1;
	int maxresult = -1;
	for (int i = 0; i < 26; i++) {
		if (al[i] > maxresult) {
			max = i;
			maxresult = al[i];
		}
	}

	int count = 0;
	for (int i = 0; i < 26; i++) {
		if (al[i] == maxresult) {
			count++;
		}
	}

	if (count > 1) {
		printf("?");
	}
	else {
		printf("%c", max + 65);
	}
}