#include <stdio.h>

int main(){

	int n=1;
	int max=0;


	printf("입력한 수의 최댓값 알려주는프로그램 \n");
	while(n != 0){
		printf("정수를 입력하라. :");
		scanf("%d",&n);

		if(max<n)
			max=n;


	}

	printf("입력한 정수 중 최댓값은 %d 이다.\n",max);
	

	return 0;
}