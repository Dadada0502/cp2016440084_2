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


    printf("������ �Է��ϼ���: ");
    scanf("%d", &num1);    // ǥ�� �Է��� �޾Ƽ� ������ ����
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    
    printf("%d\n", choosebigone(num1,num2,num3));    // ������ ������ ���

    return 0;
}