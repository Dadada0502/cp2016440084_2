#include <stdio.h>

int main(){

	int n =0;

	do{
		printf("1~9사이의 숫자를 입력하라. \n");
		scanf("%d",&n);
		
		if(n<1 || n>9){
			printf("잘못입력했다!\n");
		}
	}while(n<1 || n>9);
	

	for(int i=1;i<10;i++){
		printf("%d X %d = %d\n",n,i,n*i);
	}
	return 0;
}