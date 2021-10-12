#define _CRT_NO_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
int n = 10;

void qucikSort(int arr[], int left, int right) {
	if (left >= right) {//정렬할 데이터 수가 1인 경우
		return;
	}
	int pivot = left;
	int i = left + 1;
	int j = right;
	int temp;
	while (i<=j){ //i가 j 이하일때 까지
		while (arr[i]<=arr[pivot]){ //i위치의 값이 pivot위치의 값 이하
			i++;
		}
		while (arr[j]>=arr[pivot]&&j>left){
			j--;
		}
		if (i>j){// i와 j 가 크로스될 경우
			SWAP(arr[j], arr[pivot], temp);
		}
		else{// i가 j보다 작은 경우는 피봇과 교체하지 않음.
			SWAP(arr[i], arr[j], temp);
		}
	}
	qucikSort(arr, left, j - 1);
	qucikSort(arr, j + 1, right);
}

int main() {
	qucikSort(arr, 0, n - 1);//left 0,right n-1(배열 인덱스)
	//정렬된 결과가 출력되도록 반복문을 사용하여 배열내용 보여주기
	for (int i = 0; i < n; i++) {
		printf("%3d", arr[i]);
	}
	//퀵정렬 시간 복잡도 O(NlogN) , 평균속도
	//퀵정렬 시간복잡도 O(N^2)인 경우 ,최악의 경우
	//1 2 3 4 5
}
