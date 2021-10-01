////#include <stdio.h>
////#include <stdlib.h>
////
////typedef struct NODE ND;
////
////struct NODE {
////	struct NODE* next;
////	int data;
////};
////
////int main() {
////	struct NODE* head = malloc(sizeof(struct NODE));
////
////	struct NODE* node1 = malloc(sizeof(struct NODE));
////	head->next = node1;
////	node1->data = 10;
////
////	struct NODE* node2 = malloc(sizeof(struct NODE));
////	node1->next = node2;
////	node2->data = 20;
////
////	node2->next = NULL;
////
////	struct NODE* curr = head->next;
////	while (curr != NULL) {
////		printf("%d\n", curr->data);
////		curr = curr->next;
////	}
////
////	free(node2);
////	free(node1);
////	free(head);
////
////	return 0;
////
////}
//
//#include <stdio.h>
//#include <Stdlib.h>
//typedef struct NODE ND;
//struct NODE {
//	struct NODE* next;
//	int data;
//};
//
//int main() {
//	struct NODE* head = malloc(sizeof(struct NODE));
//
//	struct NODE* node1 = malloc(sizeof(struct NODE));
//	head->next = node1;
//	node1->data = 10;
//
//	struct NODE* node2 = malloc(sizeof(struct NODE));
//	node1->next = node2;
//	node2->data = 20;
//
//	struct NODE* curr = head->next;
//	while (curr != NULL) {
//		printf("%d\n", curr->data);
//		curr = curr->next;
//	}
//
//	free(node2);
//	free(node1);
//	free(head);
//}

//
//#define SIZE 5;
//
//int stack[SIZE];
//int top = -1;
//
//void push(int val) {
//	if (top == SIZE - 1)
//		printf("스택이 가득참\n");
//	else
//		stack[++top] = val;// 
//}
//
//void pop() {
//	if (top == -1)
//		printf("스택이 비었음\n");
//	else
//		printf("%d 가 삭제됨",stack[top--]);
//}
//
//#define SIZE 5;
//
//int stack[SIZE];
//int top = -1;
//
//void push(int val) {
//	if (top == [SIZE - 1])
//		prinnf("스택이 가득참\n");
//	else
//		stack[++top] = val;
//}
//
//void pop() {
//	if (top == -1)
//		printf("스택이 비었음");
//	else
//		printf("%d 가 삭제됨", stack[top--]);
//}