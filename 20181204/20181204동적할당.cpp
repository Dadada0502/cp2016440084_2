#include<stdio.h>
#include<stdlib.h>
//프로그래밍언어의 기능
//1.컴퓨터 기능 지원
//2.요약화
//	절차적요약화 : 함수
//  선언전요약화 : 구조체


//Today's Topic 구조체(structure)
//				(구성 요소 + 요소간의 관계)
// 벡터 숫자 두개이상 필요
// 복소수 -> 실수부, 허수부


//위의 두문장을 한문장으로 만들 수 있다.
typedef struct complex{ // complex 안적어도 된다.
	double real; //멤버 변수(member variable)
	double img;	 // 상동(ditto) . 위와 같다.
} Complex;

//함수 : printComplex()
//입력 : 복소수
//출력 : 없음
//부수효과 : 없음

void printComplex(Complex* ptr){ //대부분의 경우 구조체 포인터를 매개변수로 전달 받는다.
	printf("%f + %fj \n",ptr->real,ptr->img);
}






//함수 : returnConjugate Version 2 : GOOD
//입력 : 복소수 포인터
//출력 : 복소수 변수
//부수효과 : 없음
Complex* returnConjugate(Complex* ptr){
	Complex* tempPtr ;
	tempPtr = (Complex*) malloc(sizeof(Complex));//동적할당 //#1 size of double 2개 8*2 해서 HEAP공간에서 16바이트 확보됨 #2 (Complex*)는 이공간을 complex로 활용하겠다는 것.//반환되는거 주소값임.

	tempPtr -> real = ptr->real; tempPtr->img = -1 * ptr->img;
	return tempPtr;
}



////함수 : returnConjugate
////입력 : 복소수 포인터
////출력 : 복소수 변수
////부수효과 : 없음
//Complex* returnConjugate(Complex* ptr){
//	Complex temp ;
//	temp.real = ptr->real; temp.img = -1*ptr->img;
//	return &temp;
//}


Complex* plusComplex(Complex* ptr1, Complex* ptr2){
	Complex* tempPtr;
	tempPtr = (Complex*) malloc(sizeof(complex));

	tempPtr->real = ptr1->real + ptr2->real;
	tempPtr->img = ptr1->img + ptr2->img;

	return tempPtr;

}

int main(){

	Complex a;
	Complex * ptr;
	ptr = &a;
	a.real = 10;
	a.img = 20;
	ptr =returnConjugate(&a);


	return 0;
}


//												complex																
//	Complex a ->				  a: real :		10		함수안에서 ptr->real   
//							    	 img  :		20		함수안에서 ptr->img
//														complex*
//	b=returnConjugate(&a); printComplex(&b); -> ptr  :   &a(a가르킴)	#1공간확보 #2&a넣기
//											ptr 이름 붙임 Complex* returnConjugate(Complex* ptr){
//														complex
//						Complex temp  ->	temp :		real : 10
//														img : -20 -->구름에 복사 . temp랑 ptr메모리는 소멸 
//																(이 구조체 구름에 복사하는데 시간 엄청 오래걸림. 그래서 이런식으로 리턴안하고 포인터를 리턴함.)

//변경후 temp의 포인터를 구름속에 복사함.						complex*
//ptr=returnConjugate(&a); ->				(main함수의) ptr : temp가르킴					-> 제대로 값 안나옴.함수끝난 뒤 메모리 소멸되서 그 주소 다른 용도로 사용중.


//해결해보자. 메모리 동적할당.
//00000000~ FFFFFFFF 주소 가질 수 있다.
//반이상은 OS, 어느정도는 프로그램. 나머지가 데이터. 하드웨어 돌리는건 OS에서 돌려야함.( ( (HW)OS) APP)
//데이터 세가지영역으로 나뉘어짐. TEXT;전역변수, HEAP,STACK;지역변수
//HEAP에 생성하면 프로그래머가 맘대로 할 수 있다.	지역변수는 함수 없어지면 소멸stack에 있는 것들. 전역변수는 프로그램끝날때 소멸 TEXT.



//STACK										HEAP
//			Complex*										Complex		
//tempPtr	HEA에 있는 complex가르킴-------->real:
//											 img:
//이공간 필요없으면 free(ptr)
//retrun tempPtr 하면 구름 속에 tempPtr, 이건 HEAP에 있는 컴플렉스 가르킴. main의 ptr도 HEAP의 complex가르키게 됨. 함수 메모리 소멸.

//malloc(), free() --> 동적할당 (Dynamic allocation) Dynamic 프로그램 실행시 변화. static complie시 정해짐.