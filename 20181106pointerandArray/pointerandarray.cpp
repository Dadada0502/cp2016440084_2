#include <stdio.h>
//printArray()
//입력 : 배열
//출력 : 없음
//부수효가 : 화면에 배열의 값을 출력
void printArray(int arr[], int len){
	for(int index=0; index<len;index++)
		printf("array[%d] = %d \n",index, arr[index]);

}


int main(){  
	int a[3] = {10,20,30}; //배열의 선언 : 배열이름: a, 배열길이 : 3	 a[0]=10,a[1]=20,a[2]=30
	int* ptr;// ptr을 int*로 메모리 공간 확보
	//배열의이름만 사용하면 그 배열 첫 요소의 포인터 값이 된다. 
	ptr = a; // == ptr = &a[0].. a[0]의 주소.							

	printf("a[0] = %d \n",a[0]); //밑에거랑 같다.
	printf("a[0] = %d \n",*ptr); //이렇게 하면 a[0]의 데이터값 출력된다.
	
	printf("a[0] = %d \n",ptr[0]); //포인터변수이름을 배열이름으로도 사용할 수 있다.


	printf("a[1] = %d \n",ptr[1]);
	printf("a[2] = %d \n",ptr[2]);

	//printArray(a,3);

	return 0;
}
