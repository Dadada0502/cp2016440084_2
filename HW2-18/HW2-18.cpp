#include <stdio.h>

int main(){


	int num=0;
	int i=1;

	for(i=1;i<=100;i++){
		if(i%5==0){
			num +=i;
		}
	}

	printf("1~100������ ���� %d�̴�.",num);
	

	return 0;
}