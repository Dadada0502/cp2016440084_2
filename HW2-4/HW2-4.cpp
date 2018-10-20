#include <stdio.h>

int main(){
	int num=0;

	for(int i=1;i<=100;i++){
		if(i%3==0){
			num += i;
		}
	}
	
	printf("3의 공배수의 총합은 %d이다. \n",num);

	return 0;
}