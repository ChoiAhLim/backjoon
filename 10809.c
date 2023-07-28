#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char S[100] = { NULL, };
	char pos[26];

	for (int i = 0; i < 26; i++) {
		pos[i] = -1;
	}

	scanf("%s", S);
	int i = 0;
	while(S[i]) {
		for (char j = 'a'; i <= 'z'; j++) {
			if (S[i] == j) {
				if (pos[j-'a'] == -1)
					pos[j-'a'] = i;
				break;
			}
		}
		i++;
	}

	for (i = 0; i < 26; i++) {
		printf("%d ", pos[i]);
	}
}