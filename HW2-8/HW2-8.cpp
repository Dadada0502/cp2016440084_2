#include <stdio.h>

int main(){

	int n =0;

	do{
		printf("1~9������ ���ڸ� �Է��϶�. \n");
		scanf("%d",&n);

	}while(n<1 || n>9);
	

	for(int i=1;i<10;i++){
		printf("%d X %d = %d\n",n,i,n*i);
	}
	return 0;
}