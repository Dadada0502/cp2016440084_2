#include<stdio.h>

int gVar = 100; // 함수 밖에서 선언하면 전체 소스코드 내에서 사용할 수 있다. 전역 변수(global variable). 웬만하면 안씀.
// 함수 sum()
// 입력 : 두 정수
// 출력 : 두 정수의 합
// 부수효과: 없음

int sum(int x, int q){  //함			//함수 선언 {전 까지. 1. sum은 함수의 이름이다. 2. 매개변수의 갯수(2)소괄호 안 3. 각 매개변수의 자료형(int,int) 4. 반환값의 자료형(반환형) int
	int c;			    //수			// 위의 4가지. 함수 호출하기 위해 필요한 정보다.
	c= x+q;				//정			// 유효범위. scope 이 함수안에서 선언되면 이함 수 안에서만 유효하다.
	return c;		    //의
}					     //.			// {부터 }를 함수 본체라고한다.




//함수 : goodPrint()
//입력 : 없음
//출력 : 없음
//부수효과 : 화면에 good 출력
void goodPrint(){ // 출력 없을 때 void사용.
	printf("good \n");

}

int main(){             // 이름이 main인 함수.
	int x=10, y=20,z;
	z = sum(x,y);		//함수 호출				위에 x와는 scope이 다르다. 다른 변수.

	goodPrint();
	printf("z = %d\n",z);

	return 0;

}