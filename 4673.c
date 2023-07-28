#include <stdio.h>

int sum(int n) {
	int sum = 0;
	int tmp = n / 10;
	sum += tmp;
	while (tmp > 0) {
		tmp = n / 10;
		sum += tmp;
	}

	return sum + n;
}

int main() {
	int n = 1;
	while (n <= 10000) {
		printf("%d\n", n);
		n = sum(n);
	}
}