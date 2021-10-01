//#include <stdio.h>
//
//typedef struct stu{
//	char name[10];//구조체 멤버 변수 , 필드
//	int age;
//	int score;
//}student;//stu를 student라는 이름으로 쓴다는 의미
//
////struct stu { ////구조체를 쓰는 다른방법
////	char name[10];
////	int age;
////	int score;
////};
////
////typedef stu student;
//
//int main() {
//	student s13 = { "kim",17,90 };
//	student s12 = { "park",17,95 };
//	//구조체 변수 초기화
//	printf("이름: %s 나이: %d  점수: %d\n", s13.name, s13.age, s13.score);
//	printf("이름: %s 나이: %d  점수: %d\n", s12.name, s12.age, s12.score);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string>
//
//typedef struct STU {
//	char name[10];
//	int age;
//}stu;
//
//int main() {
//	stu* student;
//	student = (stu*)malloc(sizeof(stu));
//	strcpy(student->name, "kim");//포인터로 쓸때는 . 대신 ->
//	student->age = 17;// = (*student).age = 18; .을 쓰고싶으면 포인터에 .을 찍는다.
//	free(student);
//	return 0;
//}