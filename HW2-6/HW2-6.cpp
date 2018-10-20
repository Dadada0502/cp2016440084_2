#include <stdio.h>

int main(){

	int n =0;


	do{
		printf("양의 정수를 입력하라. \n");
		scanf("%d",&n);

	}while(n<=0);
	

	printf("입력한 정수의 2배는 %d이다. \n",2*n);

	return 0;
}