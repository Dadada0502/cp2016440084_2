#include <stdio.h>

int main(){

	int num =0;
	int addednum=0;
	do{
		if(num%3==0){
			addednum += num;
		}
		num++;
	}
	while(num<100);

	printf("3�� ������� ������ %d�̴�. \n",addednum);

	return 0;
}