#include<stdio.h>
int choosebigone(int a, int b, int c){

int bigone ;

if (a>b){

if(a>c)
 bigone=a;

else bigone=c;
}

else if (b>a) {
if(b>c)
bigone = b;
else bigone =c;
}

else bigone = b;


return bigone;  

}


int main()
{
    int num1;
    int num2;
    int num3;


    printf("정수를 입력하세요: ");
    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    
    printf("%d\n", choosebigone(num1,num2,num3));    // 변수의 내용을 출력

    return 0;
}