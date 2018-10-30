//1. 두 정수 사이에 모든 정수들(두 정수 포함)를 순서대로 화면에 출력하는 함수

//강의일정에서 함수작성방법 읽고 따라하기.
//함수 이름. 함수 첫단어는 동사. 소문자. 뒤에 다른단어 쓰고싶으면 그 단어는 대문자로 쓰기. 3)가지 기억.
#include <stdio.h>

//함수 printNumber()
//입력: 두 정수
//출력: 없음
//부수효과: 없음

void printNumber(int a, int b){
	int count = a;
	while(count <= b)
		printf("%d \n", count++);
}

int main(){

	int a = 3, b=50;
	//printNumber(a,b);
	printNumber(-20,100);


	printf("end of program \n");
}



//순서도
//
//						a=3,b=50
//						count = a
//							(조건문)count <=b
//		T:화면출력										 F: 종료
//		count ++ 다시 조건문으로.