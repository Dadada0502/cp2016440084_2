#include <stdio.h>

int main(){

	int n;
	int num;
	int i=1;


	printf("�ڸ��� �˷��ִ� ���α׷� \n ������ �Է��϶�. :");
	scanf("%d",&n);
	num = n/10;
	while(num != 0){
		num /= 10; 
		i++;


		}

	printf("�Է��� ������ �ڸ����� %d �̴�.\n",i);
	

	return 0;
}