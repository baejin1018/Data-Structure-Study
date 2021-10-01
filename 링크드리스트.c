#include <stdio.h>
#include <stdlib.h> //malloc, free 함수가 선언된 해더파일

typedef struct NODE ND;;
struct NODE{//연결리스트의 노드 구조체
	struct NODE* next;//다음 노드의 주소를 저장할 포인터
	int data;//데이터를 저장할 멤버
};

int main() {
	struct NODE* head = malloc(sizeof(struct NODE)); //머릲두 샹송 , malloc  =  필요한 공간만큼 공간을 만들어준다

	struct NODE* node1 = malloc(sizeof(struct NODE)); //첫 번째 노드 생성
	head->next = node1;// 머리 노드 다음은 첫번째 노드, (*head).next =node1; 이랑 node->next = node1 은 같다
	node1->data = 10;//첫번째노드에 10저장

	struct NODE* node2 = malloc(sizeof(struct NODE)); //두 번째 노드 생성
	node1->next = node2;// 첫번쨰 노드 다음은 두번쨰 노드
	node2->data = 20;//두번째노드에 20저장

	node2->next = NULL;//두번쨰노드 다음은 노드가 없은 (NULL)

	struct NODE* curr = head->next;//연결리스트 순회용 포인터에 첫 번째 노드의 주소 저장
	while (curr != NULL) {//포인터가 NULL이 아닐때 계속반복
		printf("%d\n", curr->data);//현재 노드의 데이터 출력
		curr = curr->next;//포인터에 다음 노드의 주소 저장
	}
	free(node2);        // 노드 메모리 헤제
	free(node1);        // 노드 메모리 헤제
	free(head);         // 노드 메모리 헤제
}