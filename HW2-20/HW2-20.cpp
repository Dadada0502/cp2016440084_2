#include <stdio.h>

int main(){

	int i=2;
	int n=2;
	int isprime=0;


	printf("100���� �Ҽ� �˷��ִ� ���α׷� \n �Ҽ���: ");


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