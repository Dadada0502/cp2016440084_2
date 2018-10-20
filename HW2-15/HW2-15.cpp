#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;
	int i;
	int relativenum;

		relativenum = rand()%100+1;

	for(i=0;i<10;i++){
			printf("1~100사이의 숫자하나를 입력하라. \n");
			scanf("%d",&n);	
		
		if (relativenum < n){
			printf("입력하신 숫자보다 작습니다. \n\n\n");
		}

		else if (relativenum ==n){
			printf("정답입니다! \n\n\n");
			break;

		}

		else {
			printf("입력하신 숫자보다 큽니다. \n\n\n");
		}
	}
		if(i==10)
			printf("GAME OVER.\n");

	

	return 0;
}