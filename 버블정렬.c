#include <stdio.h>

void bubble1(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 1; j < n - i; j++) {
			if (a[j - 1] > a[j]) { //버블정렬
			   //if( a[i] > a[j] ) //선택정렬
				int t = a[j - 1];
				a[j - 1] = a[j];
				a[j] = t;
			}
		}
		/*for (int j = 0; j < n - i - 1;j++) {
			if(a[j]>a[j+1])
		}*///위에 포문과 동일
	}
}

int main() {
	int a[5] = { 5,2,3,4,1 };
	bubble1(a, 5);
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
}
//버블정렬 이웃하는 항을 비교 하며 스왑 ex) 1과2를비교 2와 3을비교 3과 4를 비교...
//선택정렬 지정해서 쭉비교 ex) 1을 지정하면 1 2 3 4 5 6 7 . . 끝까지 비교후 다음수로 비교 하며 스왑


//버블정렬의 다른방법
//void swap(int* xp, int* yp) {
//	int temp = *xp;
//	*xp = *yp;
//	*yp = temp;
//}
//
//void bubbleSort(int arr[], int n) {
//	int i, j;
//	for (i = 0; i < n - 1;i++)
//		for (j = 0; j < n - i - 1;j++)
//			if (arr[j] > arr[j + 1])
//				swap(&arr[j], &arr[j + 1]);
//}