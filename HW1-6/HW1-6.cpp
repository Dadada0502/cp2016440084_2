#include<stdio.h>
int changeposition(int a){

int num1;
int num10;

int changednum;

num1=a%10;

num10=a/10;

changednum =  num1*10 + num10;

return changednum;
}

int main()
{
    int num1;



    printf("두자리의 정수를 입력하세요: ");
    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장

    if(num1<10){
 printf("두자리의 정수를 입력하세요: ");
scanf("%d", &num1);

}
    else 
	
    printf("changed number is %d\n ", changeposition(num1));    // 변수의 내용을 출력


    return 0;
}
