#include <stdio.h>

int main(){

	int n;
	int num;
	int i=1;


	printf("자릿수 알려주는 프로그램 \n 정수를 입력하라. :");
	scanf("%d",&n);
	num = n/10;
	while(num != 0){
		num /= 10; 
		i++;


		}

	printf("입력한 정수의 자릿수는 %d 이다.\n",i);
	

	return 0;
}