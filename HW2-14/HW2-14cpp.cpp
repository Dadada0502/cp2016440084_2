#include <stdio.h>

int main(){

	int n;
	int num=0;

	printf("7�̻��� ������ �Է��϶�. :");
	scanf("%d",&n);

	if(n>=7){
		for(int i=7;i<=n;i++){
			num+=i;
		}

		printf("7���� �Է��� �������� ���� %d �̴�.\n",num);
		}

	else printf("ERROR : 7�̻��� ���ڸ� �Է����� �ʾҽ��ϴ�.\n");
	

	return 0;
}