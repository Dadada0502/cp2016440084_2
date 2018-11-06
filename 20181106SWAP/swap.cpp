#include <stdio.h>
void swap(int* ptr1, int* ptr2){
		//swap: 변수 a, b의 값을 바꾼다.
	int temp;
	temp = *ptr1;
	*ptr1=*ptr2; //저장장소 = 값 ptr1이 가르키는 값(a의 값이) b의 값으로 바뀐다
	*ptr2 = temp; // ptr2가 가르키는 값(b의 값) 안된다.
}//끝나면 매개변수 메모리값 소멸.



	int main(){  
	int a =100, b=200;
	swap(&a,&b);


	printf("a = %d, b=%d \n",a,b);

	return 0;
}
