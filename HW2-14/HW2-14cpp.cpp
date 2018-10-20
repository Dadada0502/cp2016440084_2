#include <stdio.h>

int main(){

	int n;
	int num=0;

	printf("7이상의 정수를 입력하라. :");
	scanf("%d",&n);

	if(n>=7){
		for(int i=7;i<=n;i++){
			num+=i;
		}

		printf("7부터 입력한 수까지의 합은 %d 이다.\n",num);
		}

	else printf("ERROR : 7이상의 숫자를 입력하지 않았습니다.\n");
	

	return 0;
}