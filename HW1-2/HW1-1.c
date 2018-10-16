#include<stdio.h>
int detectodd(int a){

int odd;

odd = a%2;



return odd;

}


int main()
{
    int num1;



    printf("정수를 입력하세요: ");
    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장

    
    if(detectodd(num1) ==1)
    	printf("%d is odd", num1);    // 변수의 내용을 출력


    else if(detectodd(num1) ==0)
    	printf("%d is even", num1);

    return 0;
}
