#include<stdio.h>
int detectodd(int a){

int odd;

odd = a%2;



return odd;

}


int main()
{
    int num1;



    printf("������ �Է��ϼ���: ");
    scanf("%d", &num1);    // ǥ�� �Է��� �޾Ƽ� ������ ����

    
    if(detectodd(num1) ==1)
    	printf("%d is odd", num1);    // ������ ������ ���


    else if(detectodd(num1) ==0)
    	printf("%d is even", num1);

    return 0;
}
