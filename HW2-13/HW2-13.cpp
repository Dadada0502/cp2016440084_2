#include <stdio.h>

int main(){

	int month=0;
	int day=0;
	int addedday=0;


	printf("월,일을 입력하시오 :");
	scanf("%d %d",&month,&day);
	addedday += day;

	switch(month){
		case 1 : addedday +=0;  break;
		case 2 : addedday +=31;break;
		case 3 : addedday +=59; break;
		case 4 : addedday +=89; break;
		case 5 : addedday +=120; break;
		case 6 : addedday +=150; break;
		case 7 : addedday +=181; break;
		case 8 : addedday +=212; break;
		case 9 : addedday +=242; break;
		case 10 : addedday +=253; break;
		case 11 : addedday +=283; break;
		case 12 : addedday +=294; break;
		
		default : printf("잘못입력하셨습니다."); break;
		}

	

	if(1<=month<=12)
	printf("1월 1일부터 입력한 날짜까지의 걸리는 날은 %d일 이다..\n",addedday);

	

	return 0;
}