#include <stdio.h>
#include <stdlib.h>

int main(){

	int n;
	int i;
	int relativenum;

		relativenum = rand()%100+1;

	for(i=0;i<10;i++){
			printf("1~100������ �����ϳ��� �Է��϶�. \n");
			scanf("%d",&n);	
		
		if (relativenum < n){
			printf("�Է��Ͻ� ���ں��� �۽��ϴ�. \n\n\n");
		}

		else if (relativenum ==n){
			printf("�����Դϴ�! \n\n\n");
			break;

		}

		else {
			printf("�Է��Ͻ� ���ں��� Ů�ϴ�. \n\n\n");
		}
	}
		if(i==10)
			printf("GAME OVER.\n");

	

	return 0;
}