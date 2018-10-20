#include <stdio.h>

int main(){

	//============당분간 이 위는 무시하세요....
	// ctrl - ] :matching  parenthesis
	// ctrl -jk, ctrl-f : format맞춰줌
	// ctrl-k, ctrl-c : comment out// 선택한 영역 주석처리
	// ctrl-k, ctrl-u : undo comment out
	//
	//int count = 1;
	//while(count <=10){
	//	printf("count = %d \n", count);
	//	count = count +1;
	//}

	//
	//int count = 1;

	//반복문시작
	//while(count <= 10)
	//	printf("count = %d\n",count++); 

	////반복문 끝



	////1에서 부터 100까지 3의배수 정수만  화면에 출력
	//count =1;
	//while(count <=100){
	//	if (count%3 ==0)
	//		printf("count = %d \n",count);
	//	count++;
	//}


		//1에서 부터 100까지 3의배수를 제외한 정수만  화면에 출력
	//count =1;
	//while(count <=100){
	//	if (count%3 !=0)
	//		printf("count = %d \n",count);
	//	count++;
	//}


	//키보드에서 정수를 계속 입력받아 3의 배수 여부를 알려주는 프로그램
	//위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다.

	//int input;
	//while(1){
	//	printf("정수를 입력하세요: ");
	//	scanf("%d",&input);
	//	if(input == 100) break;

	//	if(input >1000){
	//		printf("입력한 정수가 1000보다 큽니다. 다시 입력해 주세요 \n");
	//		continue; // 조건식으로가는데 1은 늘 참이므로 곧장 내려옴.

	//	}
	//		if(input%3 == 0)
	//			printf("입력한 정수 %d는 3의 배수입니다 \n", input);

	//		else 
	//			printf("입력한 정수 %d는 3의 배수가 아닙니다. \n",input);

	//	
	//}

	//1에서 100까지의 정수의 합을 구하시오
	int sum = 0;
	int i = 1;
	while(i<=100){
		//sum = sum + i;
		//i++;
		//sum = sum + i++;

		sum += i++;
	}

	printf("the sum is %d \n", sum);

	//============당분간 이 아래는 무시하세요
	return 0;

}