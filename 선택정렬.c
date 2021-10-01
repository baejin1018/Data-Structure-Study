#include <stdio.h>
//선택정렬 속도는 느리지만 사람이 이해하기 쉬운 알고리즘
void input(int a[], int cnt) {
	for (int i = 0; i < cnt; i++)
		scanf("%d", &a[i]);
}

void output(int a[], int cnt) {
	for (int i = 0; i < cnt; i++)
		printf("%d", a[i]);
}

void swap(int* x, int* y) {
	int t = *x;
	*x = *y;
	*y = t;
}

void selectionSort(int a[], int cnt) {
	for (int i = 0; i < cnt - 1; i++) {
		for (int j = i + 1; j < cnt; j++) {
			if (a[i] > a[j])
				swap(&a[i], &a[j]);
		}
	}
}
int main() {
	int n;
	int a[100];
	scanf("%d", &n);
	input(a, n);
	selectionSort(a, n);
	output(a, n);
	return 0;
}