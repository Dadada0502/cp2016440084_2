//7. 정수 배열의 합을 반환하는 함수
#include <stdio.h>


//함수 이름: addArray()
//입력 : 배열
//출력 : 배열 각 요소들의 합
//부수효과 : 없음

int addArray(int arr[], int length){
	int index = 0;
	int sum=0;	
	while(index <length)
		sum += arr[index++];
	//printf("this sum is %d \n",sum);




	return sum;
}

int main(){

	int a[4] = {10,20,30,40};
	int length = 4;
	
	addArray(a,length);

	printf("this sum is %d \n",addArray(a,length));



	return 0;
}




//정수 배열 a[],length 초기값 주어졌다고생각
//	intdex = 0, sum = 0
//
//	(조건문) index < length 
//T: sum +=a[index]						F: 종료
//index ++ 다시 조건문으로
