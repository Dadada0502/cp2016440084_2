#include <stdio.h>

int main(){

	int i=0;
	int num = 0;
	printf("정수 10개를 입력하라");
	while(i<10){
		int addednum;

		scanf("%d",&addednum);

		num +=addednum;
		i++;
	}
	printf("%d\n",num);

	return 0;
}