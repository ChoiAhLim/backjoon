#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    int sum;
    sum = A * B * C;
    int arr[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
    int i = 0;
    while (sum >= 1) {
        arr[i] = sum % 10;
        sum = sum / 10;
        i++;
    }
    int c[10] = { 0, };
    
    int j = 0;
    while(arr[j] >= 0 && arr[j] <= 9) {
        if (arr[j] == 0) c[0]++;
        if (arr[j] == 1) c[1]++;
        if (arr[j] == 2) c[2]++;
        if (arr[j] == 3) c[3]++;
        if (arr[j] == 4) c[4]++;
        if (arr[j] == 5) c[5]++;
        if (arr[j] == 6) c[6]++;
        if (arr[j] == 7) c[7]++;
        if (arr[j] == 8) c[8]++;
        if (arr[j] == 9) c[9]++;
        j++;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d", c[i]);
        if (i != 9) printf("\n");
    }
}