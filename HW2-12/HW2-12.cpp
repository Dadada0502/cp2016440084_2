#include <stdio.h>

int main(){

	int n;
	int relativenum;

		printf("������ �Է��϶�. \n");
		scanf("%d",&n);
		relativenum = n;

	while(n != 0){
		printf("������ �Է��϶�. \n");
		scanf("%d",&n);		
		
		if (relativenum < n){
			relativenum = n;
		}

	}

		printf("�Է��� �� �� ���� ū ���� %d �̴�.\n",relativenum);

	

	return 0;
}