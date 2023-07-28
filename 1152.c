#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char arr[1000000];
	scanf("%[^\n]", arr);

	int count = 0;
	char* ptr = strtok(arr, " ");

	while (ptr != NULL) {
		count++;
		ptr = strtok(NULL, " ");
	}

	printf("%d", count);
	return 0;
}