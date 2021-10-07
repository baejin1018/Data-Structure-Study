//알파벳 소문자로만 이루어진 단어 S가 주어진다.
//각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 - 1을 출력하는 프로그램을 작성하시오.
//
//입력 : apple
//
//출력 :
//a   b   c   d   e   f   g   h   i   j   k   l   m   n   o   p   q   r   s   t   u   v   w   x   y   z
//0 - 1 - 1 - 1   4 - 1 - 1 - 1 - 1 - 1 - 1   3 - 1 - 1 - 1   1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char word[101] = { 0, };
	int num[27];
	int i, j;

	scanf("%s", word);

	for (i = 0; i < 26; i++)
		num[i] = -1;

	for (i = 97; i <= 122; i++) {
		for (j = 0; j < strlen(word); j++) {
			if (i == word[j]){
				num[word[j]-97] = j;
				break;
			}
		}
	}
	for (i = 0; i < 26; i++) {
		printf("   %c", 97 + i);
	}
	printf("\n");
	for (i = 0; i < 26; i++) {
		printf("%4d", num[i]);
	}
	return 0;
}