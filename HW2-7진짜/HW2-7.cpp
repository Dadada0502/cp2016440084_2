#include <stdio.h>

int main(){

	int n =0;
	int addednum=0;


	do{
		printf("정수를 입력하라. \n");
		scanf("%d",&n);
		addednum +=n;

	}while(n!=0);
	

	printf("입력한 정수의 총합은 %d이다. \n",addednum);

	return 0;
}