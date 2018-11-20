#include<stdio.h>
//review
//컴퓨터의 기능
//	1.메모리접근
//		자료형, 변수, 배열, 포인터, 상태도				//배열의 이름 포인터로 사용가능.
//	2.연산
//		수식,연산자
//	3.순서제어
//		문장,조건문,반복문,복합문(여러문장 한문장으로)
// 알고리즘?
//	1.문제푸는 방법 ; step - by - step
//		(조건)단, (1-1) 컴퓨터 기능만 사용. 30 27 42 있을 때 한 번에 하나씩 밖에 못봄
//				  (1-2) 유한한 step 
//요약화			-> 툴 : 함수
//	1. 목적
//	2. 요약(생략)
//
//프로그래밍 언어
//	1. 컴퓨터의 기능 3가지 제공
//	2. 추상화 제공 - 함수    // 함수,구조체 합쳐서 class라고함 -> 객체지향프로그래밍
//				   - 구조체
//

//삽입정렬
//20 30 13 24
//20 30				20에다가 30추가. 30이 크니까 뒤에 정렬
//13 20 30			20,30에 13추가. 13이 크니까 젤 앞에 정렬
//13 20 24 30		13,20,30에 24추가. 크기 맞춰서 정렬

void swapElement(int* a,int minIndex, int firstIndex){
	int temp = a[firstIndex];
	a[firstIndex]= a[minIndex];
	a[minIndex] = temp;
}

//{37,42,45,50} 40추가
//함수이름: insertElement 
//함수 입력: 배열, 삽입하려는 요소의 인덱스 //가정 : 입력된 배열은 이미 정렬되어있다.
//반환 값 : 없음
//부수효과 : 배열의 ele요소까지 정렬됨
void insertElement(int* arr,int element){
	element = 4;
	while(element>0){
		if(arr[element-1]>arr[element]) //왼쪽 요소가 크면 두 요소를 바꾸고
			swapElement(arr,element-1,element);
				
		else break; //작으면 끝
		element --;
	}
}

//함수 : insertSort()
//입력 : 배열
//출력 : 없음
//부수효과: 배열이 정렬됨
void insertionSort(int* arr, int length){
	
	for(int i=0; i<length;i++){
		insertElement(arr,i);
	}

}

void printArray(int arr[], int len){
	for(int index=0; index<len;index++)
		printf("array[%d] = %d \n",index, arr[index]);

}


int main(){

	int a[] = {37,42,45,50,40};

	insertionSort(a,5);
	printArray(a,5);


	return 0;
}

//순서도
//초기화			ele = 4
//조건문1마름모		ele != 0
//true				조건문 2
//false				break
//조건문2마름모		arr[ele-1]>arr[ele]
//true				break
//false				swapElement(arr,ele-1,ele)
//					ele --

