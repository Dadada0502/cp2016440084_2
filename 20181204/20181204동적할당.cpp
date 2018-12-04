#include<stdio.h>
#include<stdlib.h>
//���α׷��־���� ���
//1.��ǻ�� ��� ����
//2.���ȭ
//	���������ȭ : �Լ�
//  ���������ȭ : ����ü


//Today's Topic ����ü(structure)
//				(���� ��� + ��Ұ��� ����)
// ���� ���� �ΰ��̻� �ʿ�
// ���Ҽ� -> �Ǽ���, �����


//���� �ι����� �ѹ������� ���� �� �ִ�.
typedef struct complex{ // complex ����� �ȴ�.
	double real; //��� ����(member variable)
	double img;	 // ��(ditto) . ���� ����.
} Complex;

//�Լ� : printComplex()
//�Է� : ���Ҽ�
//��� : ����
//�μ�ȿ�� : ����

void printComplex(Complex* ptr){ //��κ��� ��� ����ü �����͸� �Ű������� ���� �޴´�.
	printf("%f + %fj \n",ptr->real,ptr->img);
}






//�Լ� : returnConjugate Version 2 : GOOD
//�Է� : ���Ҽ� ������
//��� : ���Ҽ� ����
//�μ�ȿ�� : ����
Complex* returnConjugate(Complex* ptr){
	Complex* tempPtr ;
	tempPtr = (Complex*) malloc(sizeof(Complex));//�����Ҵ� //#1 size of double 2�� 8*2 �ؼ� HEAP�������� 16����Ʈ Ȯ���� #2 (Complex*)�� �̰����� complex�� Ȱ���ϰڴٴ� ��.//��ȯ�Ǵ°� �ּҰ���.

	tempPtr -> real = ptr->real; tempPtr->img = -1 * ptr->img;
	return tempPtr;
}



////�Լ� : returnConjugate
////�Է� : ���Ҽ� ������
////��� : ���Ҽ� ����
////�μ�ȿ�� : ����
//Complex* returnConjugate(Complex* ptr){
//	Complex temp ;
//	temp.real = ptr->real; temp.img = -1*ptr->img;
//	return &temp;
//}


Complex* plusComplex(Complex* ptr1, Complex* ptr2){
	Complex* tempPtr;
	tempPtr = (Complex*) malloc(sizeof(complex));

	tempPtr->real = ptr1->real + ptr2->real;
	tempPtr->img = ptr1->img + ptr2->img;

	return tempPtr;

}

int main(){

	Complex a;
	Complex * ptr;
	ptr = &a;
	a.real = 10;
	a.img = 20;
	ptr =returnConjugate(&a);


	return 0;
}


//												complex																
//	Complex a ->				  a: real :		10		�Լ��ȿ��� ptr->real   
//							    	 img  :		20		�Լ��ȿ��� ptr->img
//														complex*
//	b=returnConjugate(&a); printComplex(&b); -> ptr  :   &a(a����Ŵ)	#1����Ȯ�� #2&a�ֱ�
//											ptr �̸� ���� Complex* returnConjugate(Complex* ptr){
//														complex
//						Complex temp  ->	temp :		real : 10
//														img : -20 -->������ ���� . temp�� ptr�޸𸮴� �Ҹ� 
//																(�� ����ü ������ �����ϴµ� �ð� ��û �����ɸ�. �׷��� �̷������� ���Ͼ��ϰ� �����͸� ������.)

//������ temp�� �����͸� �����ӿ� ������.						complex*
//ptr=returnConjugate(&a); ->				(main�Լ���) ptr : temp����Ŵ					-> ����� �� �ȳ���.�Լ����� �� �޸� �Ҹ�Ǽ� �� �ּ� �ٸ� �뵵�� �����.


//�ذ��غ���. �޸� �����Ҵ�.
//00000000~ FFFFFFFF �ּ� ���� �� �ִ�.
//���̻��� OS, ��������� ���α׷�. �������� ������. �ϵ���� �����°� OS���� ��������.( ( (HW)OS) APP)
//������ �������������� ��������. TEXT;��������, HEAP,STACK;��������
//HEAP�� �����ϸ� ���α׷��Ӱ� ����� �� �� �ִ�.	���������� �Լ� �������� �Ҹ�stack�� �ִ� �͵�. ���������� ���α׷������� �Ҹ� TEXT.



//STACK										HEAP
//			Complex*										Complex		
//tempPtr	HEA�� �ִ� complex����Ŵ-------->real:
//											 img:
//�̰��� �ʿ������ free(ptr)
//retrun tempPtr �ϸ� ���� �ӿ� tempPtr, �̰� HEAP�� �ִ� ���÷��� ����Ŵ. main�� ptr�� HEAP�� complex����Ű�� ��. �Լ� �޸� �Ҹ�.

//malloc(), free() --> �����Ҵ� (Dynamic allocation) Dynamic ���α׷� ����� ��ȭ. static complie�� ������.