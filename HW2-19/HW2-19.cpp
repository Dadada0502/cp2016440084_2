#include <stdio.h>

int main(){

	int i=2;
	int n=0;
	int isprime=0;
	
	
	printf("�Ҽ����� �˷��ִ� ���α׷� \n ������ �Է��϶�. :");
	scanf("%d",&n);
	

	while(n>i){
		if(n%i==0){
			isprime=1;
			break;
		}
		i++;
	}

	if(isprime){
		printf("�Է��� ������ �Ҽ����ƴϴ�!\n");
	}


	else{
		printf("�Է��� ������ �Ҽ���.\n");
	}
	
	

	return 0;
}