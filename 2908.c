#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char n1[4];
	char n2[4];

	scanf("%s", n1);
	scanf("%s", n2);

	char temp;
	for (int i = 0; i < 3; i++) {
		temp = n1[0];
		n1[0] = n1[2];
		n1[2] = temp;
	}
	for (int i = 0; i < 3; i++) {
		temp = n2[0];
		n2[0] = n2[2];
		n2[2] = temp;
	}

	if (n1[0] > n2[0]) {
		printf("%s", n1);
	}
	else if (n1[0] < n2[0]) {
		printf("%s", n2);
	}
	else {
		if (n1[1] > n2[1]) {
			printf("%s", n1);
		}
		else if (n1[1] < n2[1]) {
			printf("%s", n2);
		}
		else {
			if (n1[2] > n2[2]) {
				printf("%s", n1);
			}
			else if (n1[2] < n2[2]) {
				printf("%s", n2);
			}
		}
	}
}