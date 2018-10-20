#include <stdio.h>

int main(){

	int i=2;
	int n=2;
	int isprime=0;


	printf("100이하 소수 알려주는 프로그램 \n 소수는: ");


	for(n=2;n<=100;n++){

		for(i=2;n>i;i++){
			if(n%i==0){
				isprime=1;
				i=n-1;
				//printf("%d	",1);
			}
		}

		if(!isprime){
			printf("%d	",i);
		}


	}



	return 0;
}