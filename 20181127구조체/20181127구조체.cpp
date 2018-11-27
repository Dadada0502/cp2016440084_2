#include<stdio.h>

//프로그래밍언어의 기능
//1.컴퓨터 기능 지원
//2.요약화
//	절차적요약화 : 함수
//  선언전요약화 : 구조체


//Today's Topic 구조체(structure)
//				(구성 요소 + 요소간의 관계)
// 벡터 숫자 두개이상 필요
// 복소수 -> 실수부, 허수부
// struct complex{				//구조체 이런식으로 main함수 위에 선언.
//	double real;		-> member variable
//	double imeg;		-> member variable
//};
//main(){
//	struct complex a;		//구조체 변수(a) 선언. //struct complex가 데이터 타입.
//	a.real = 10;
//	a.img = 20;
//}

//struct complex 상태도
//    ------------------
// a: |	real |10|double |
//    ------------------
//    |	img |20| double |
//    ------------------


//데이터 타입의 별명 선언(sturct complex다쓰기 귀찮)
typedef int myIntType;//자료형 "int"를 앞으로 "myIntType"이라고도 부르겠다. int와 myIntType은 같다.


////구조체 선언 : 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.
//struct complex{
//	double real; //멤버 변수(member variable)
//	double img;	// 상동(ditto) . 위와 같다.
//
//}; // 반드시 세미콜론으로 끝내야 한다.
//typedef struct complex Complex; //자료형 "struct complex"를 앞으로 Complex라고 부르겠다.
//
//

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



//함수 : conjugate()
//입력 : 복소수 //복소수 포인터임!
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레 복소수로 변환됨
void convertToConjugate(Complex* x){
	//허수부에 -1을 곱한다
	x->img = -1*(x->img);
}

//함수 : returnConjugate
//입력 : 복소수 포인터
//출력 : 복소수 변수
//부수효과 : 없음
Complex* returnConjugate(Complex* ptr){
	Complex temp ;
	temp.real = ptr->real; temp.img = -1*ptr->img;
	return &temp;
}


int main(){
	//구조체 변수 선언
	//struct complex a;
	//a.real = 10; // 구조체 변수의 멤버변수 접근방법 ==> 구조체 변수이름.멤버변수이름
	//a.img = 20;

	//printf("%f + j%f \n",a.real,a.img);


	//
	myIntType count = 10; //==> int count = 10; 와 동일.
	//
	Complex a,b; //==> struct complex a;	
	//구조체 포인터 변수 선언
	//대부분 구조체는 포인터 변수를 사용하여 접근한다.
	Complex* ptr;
	a.real = 10; // 구조체 변수의 멤버변수 접근방법 ==> 구조체 변수이름.멤버변수이름
	a.img = 20; // a라는 구조체변수를 통해 직접 접근. 별로 안씀

	//printf("%f + %fj \n",a.real,a.img);
	printComplex(&a);


	ptr = &a;
	ptr->real = 100; //구조체 포인터 변수의 멤버변수 접근 방법 ==> 구조체 변수이름 -> 멤버변수이름
	ptr->img = 200; // ptr이라는 구조체 포인터변수를 이용하여 접근. -> 이용. 대부분 이방법 사용

	printComplex(ptr);


	//b=returnConjugate(&a); printComplex(&b);
	ptr=returnConjugate(&a); printComplex(&b);

	//convertToConjugate(&a); printComplex(&a);


	return 0;
}


//매개변수 전달	상태도						complex
//	Complex a ->				 a: real :		10
//							    	 img  :		20
//	printComplex(a); -> #1 메모리 공간 확보
//							complex
//void printComplex(Complex x)		x:	real :	10 //이름 붙여줌 x
//										img :	20		 #2매개변수 값 복사

//배열 복사해서 전달한게 아니라 배열 그대로 전달. 
//why? 배열 너무 크면 #1,#2하는데 시간오래걸림.
//구조체도 그럴 수 있다. 그래서 구조체의 포인터를 함수에 던진다.


//구조체 포인터 변수 선언 Complex
// Complex* ptr; -> ptr : &a 점찍고 에이 가르킴. <-ptr = &a;


//구조체 포인터 매개변수 전달 상태도					complex* #1
//					printComplex(&a); -> 	ptr :	 #2 &a(점찍고 a가르킴)		
//												void printComplex(Complex* ptr){이게 위에줄 ptr이름 만듬



//										complex								complex
//	Complex a ->				 a: real :		10			b: real		:
//							    	 img  :		20				img		:
//														complex*
//	b=returnConjugate(&a); printComplex(&b); -> ptr  :   &a(a가르킴)
//														complex
//								Complex temp  ->	temp : real : 10
//													img : -20 --> 구름에 복사 . temp랑 ptr메모리는 소멸 
//																(이 구조체 구름에 복사하는데 시간 엄청 오래걸림. 그래서 이런식으로 리턴안하고 포인터를 리턴함.)

//변경후 temp의 포인터를 구름속에 복사함.		complex*
//b=returnConjugate(&a); ->				 ptr : temp가르킴					-> 제대로 값 안나옴. 메모리 소멸되서 그 주소 다른 용도로 사용중.
