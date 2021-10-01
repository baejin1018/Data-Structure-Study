//Queue 구현
#include <stdio.h>
int queue[5];

void menuf() {//메뉴함수
	printf("\n1.큐에 삽입 2.큐에서 삭제\n");
	printf("3.내용보기 4.종료\n");
}

int main() {
	//큐 스택 모두 1차원 배열로 구현
	int front = -1, back = -1;
	//qurur :front back // stack :top
	int menu, item;
	while (1) {
		menuf();
		scanf("%d", &menu);
		switch (menu){
		case 1://삽입
			scanf("%d", &item);
			Enqueue(&back, item);
			break;
		case 2://큐에서 삭제
			item = Dequeue(&front, back);
			if (item == -1)
				printf("큐가 비었음\n");
			else
				printf("%d가 삭제됨\n", item);
			break;
		case 3: //큐의 내용 보여주기
			Display(front, back);
			break;
		case 4://프로그램 종료
			return 0;
			break;
		}
	}
}

int Enqueue(int* back, int item) {//큐에 삽입
	if (*back == 4) {
		printf("큐가 가득참 \n");
		return;
	}
	queue[++ * back] = item;
}
 
int Dequeue(int* front, int back) {//큐에서 삭제
	if (*front == back) {
		return -1;//-1이면 큐가 비었다고 생각
		// 보통 0이 리턴되면 정상적인 종료
	}
	return queue[++ * front];
}

int Display(int front, int back) {//화면에 보여줌
	if (front == back)
		printf("큐가 비었음\n");
	for (int i = front+1; i <= back; i++)
		printf("%4d", queue[i]);
}
