#include <stdio.h>

int main(){

	int n;
	int relativenum;

		printf("정수를 입력하라. \n");
		scanf("%d",&n);
		relativenum = n;

	while(n != 0){
		printf("정수를 입력하라. \n");
		scanf("%d",&n);		
		
		if (relativenum < n){
			relativenum = n;
		}

	}

		printf("입력한 수 중 가장 큰 수는 %d 이다.\n",relativenum);

	

	return 0;
}