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



    printf("���ڸ��� ������ �Է��ϼ���: ");
    scanf("%d", &num1);    // ǥ�� �Է��� �޾Ƽ� ������ ����

    if(num1<10){
 printf("���ڸ��� ������ �Է��ϼ���: ");
scanf("%d", &num1);

}
    else 
	
    printf("changed number is %d\n ", changeposition(num1));    // ������ ������ ���


    return 0;
}
