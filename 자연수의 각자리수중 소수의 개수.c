
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char number[100];
	int size =0;
	int ct = 0;
	int count = 0;
	scanf("%s", number);

	for (int i = 0; number[i] - 48 >= 0 && number[i] - 48 <= 9; i++) {
		size++;
	}
	for (int i = 0; i < size; i++) {
		for (int j = 2; j<10; j++) {
			if((number[i] - 48) % j == 0)
				ct++;
		}
		if (ct == 1) {
			count++;
		}
		ct = 0;
	}
	printf("%d", count);
}
