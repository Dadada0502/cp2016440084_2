#include <stdio.h>

int main(){

	int n =1;


	while(n !=0){

		printf("정수를 입력하라. \n");
		scanf("%d",&n);

		if(n!=0){
			printf("%d =>",n);}

		for(int i=2;i<n;i++){
			if(n%i==0) 
				printf("%d ",i);	
		}

	}

	return 0;
}