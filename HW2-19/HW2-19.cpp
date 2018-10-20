#include <stdio.h>

int main(){

	int i=2;
	int n=0;
	int isprime=0;
	
	
	printf("소수인지 알려주는 프로그램 \n 정수를 입력하라. :");
	scanf("%d",&n);
	

	while(n>i){
		if(n%i==0){
			isprime=1;
			break;
		}
		i++;
	}

	if(isprime){
		printf("입력한 정수는 소수가아니다!\n");
	}


	else{
		printf("입력한 정수는 소수다.\n");
	}
	
	

	return 0;
}