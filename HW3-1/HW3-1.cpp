//1. �� ���� ���̿� ��� ������(�� ���� ����)�� ������� ȭ�鿡 ����ϴ� �Լ�

//������������ �Լ��ۼ���� �а� �����ϱ�.
//�Լ� �̸�. �Լ� ù�ܾ�� ����. �ҹ���. �ڿ� �ٸ��ܾ� ��������� �� �ܾ�� �빮�ڷ� ����. 3)���� ���.
#include <stdio.h>

//�Լ� printNumber()
//�Է�: �� ����
//���: ����
//�μ�ȿ��: ����

void printNumber(int a, int b){
	int count = a;
	while(count <= b)
		printf("%d \n", count++);
}

int main(){

	int a = 3, b=50;
	//printNumber(a,b);
	printNumber(-20,100);


	printf("end of program \n");
}



//������
//
//						a=3,b=50
//						count = a
//							(���ǹ�)count <=b
//		T:ȭ�����										 F: ����
//		count ++ �ٽ� ���ǹ�����.