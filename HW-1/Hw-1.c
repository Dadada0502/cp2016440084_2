#include<stdio.h>



int choosebigone(int a, int b){

int bigone; 	

if (a>b) bigone=a;

else if (b>a) bigone = b;

else bigone = b;


return bigone;  

}

int main()
{
    int num1;
    int num2;


    printf("정수 두개를 입력하세요: ");
    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장
    scanf("%d", &num2);

    
    
    printf("두 정수 중 큰 정수는 '%d\n'", choosebigone(num1,num2));    // 변수의 내용을 출력

    return 0;
}
