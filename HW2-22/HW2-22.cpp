#include <stdio.h>

int main(){

	int n=1;
	int max=0;


	printf("�Է��� ���� �ִ� �˷��ִ����α׷� \n");
	while(n != 0){
		printf("������ �Է��϶�. :");
		scanf("%d",&n);

		if(max<n)
			max=n;


	}

	printf("�Է��� ���� �� �ִ��� %d �̴�.\n",max);
	

	return 0;
}