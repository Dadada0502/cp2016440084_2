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


    printf("���� �ΰ��� �Է��ϼ���: ");
    scanf("%d", &num1);    // ǥ�� �Է��� �޾Ƽ� ������ ����
    scanf("%d", &num2);

    
    
    printf("�� ���� �� ū ������ '%d\n'", choosebigone(num1,num2));    // ������ ������ ���

    return 0;
}
