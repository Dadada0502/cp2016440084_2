#include <stdio.h>

int main(){
	int num=0;

	for(int i=1;i<=100;i++){
		if(i%3==0){
			num += i;
		}
	}
	
	printf("3�� ������� ������ %d�̴�. \n",num);

	return 0;
}