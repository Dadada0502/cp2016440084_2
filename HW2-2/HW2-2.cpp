#include <stdio.h>

int main(){

	int i=0;
	int num = 0;
	printf("���� 10���� �Է��϶�");
	while(i<10){
		int addednum;

		scanf("%d",&addednum);

		num +=addednum;
		i++;
	}
	printf("%d\n",num);

	return 0;
}