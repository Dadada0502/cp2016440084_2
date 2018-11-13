#include <stdio.h>
//printArray()
//입력 : 배열
//출력 : 없음
//부수효가 : 화면에 배열의 값을 출력
//void printArray(int arr[], int len){
void printArray(int* arr, int len){ // 위아래 둘다 가능! 아래걸 많이 사용함. //앞으로 배열을 함수에 전달할 경우 이 문법을 주로 사용한다.
	for(int index=0; index<len;index++)
		printf("array[%d] = %d \n",index, arr[index]);

}


int main(){  
	int a[3] = {10,20,30}; //배열의 선언 : 배열이름: a, 배열길이 : 3	 a[0]=10,a[1]=20,a[2]=30
	int* ptr;// ptr을 int*로 메모리 공간 확보
	//배열의이름만 사용하면 그 배열 첫 요소의 포인터 값이 된다. 
	//ptr = a; // == ptr = &a[0].. a[0]의 주소.							

	


	//a= ptr;//error Why? 식이 수정할수있는 lvalue여야한다. -> 배열의 이름(a)는 값만 가지고 있다. 즉 rvalue이다. 

	//a = 10; a는 lvalue(저장장소를 의미), 10은 rvalue (저장장소의 값을 의미)

	//10=a[2]; //10이수정할 수 있는 lvaue여야한다. 10은 저장장소 없어서 안됨. 이것처럼 a는 값만 가지고 있다. rvalue. 특정 메모리 장소에 저장되어있는것이 아니다.

	printArray(a,3);

	return 0;
}



//selection sort 컴퓨터 기능 3가지 이용해서	작은값부터 큰값 배열.		30	35	27	15	40
//1)제일 가장 작은 값을 찾는다.									findMin() // 입력: 배열. 출력: 젤 작은 값의 인덱스(위치)
//2)맨 처음갑과 최소값의 위치를 swap(바꾼다)					swap() // 입력 : 배열, 두개의 인덱스 
// 15 30 27 30 40
//3) 맨 처음값 제외하고 최솟값으 찾는다. 또 다시 두번째값과 위치 swap 이런식으로 맨처음값과 두번째값제외하고 그다음 세번째 값 제외하고 쭉 반복 하나 남을때 까지
// 반복 되므로 반복문으로 해결. 순서도. 초기화-> 조건문-> 반복 /  findMin() / swap() / 증감문 다시 조건문 

