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

	printf("3의 공배수의 총합은 %d이다. \n",addednum);

	return 0;
}