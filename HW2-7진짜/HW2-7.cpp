#include <stdio.h>

int main(){

	int n =0;
	int addednum=0;


	do{
		printf("������ �Է��϶�. \n");
		scanf("%d",&n);
		addednum +=n;

	}while(n!=0);
	

	printf("�Է��� ������ ������ %d�̴�. \n",addednum);

	return 0;
}