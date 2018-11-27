#include<stdio.h>

//���α׷��־���� ���
//1.��ǻ�� ��� ����
//2.���ȭ
//	���������ȭ : �Լ�
//  ���������ȭ : ����ü


//Today's Topic ����ü(structure)
//				(���� ��� + ��Ұ��� ����)
// ���� ���� �ΰ��̻� �ʿ�
// ���Ҽ� -> �Ǽ���, �����
// struct complex{				//����ü �̷������� main�Լ� ���� ����.
//	double real;		-> member variable
//	double imeg;		-> member variable
//};
//main(){
//	struct complex a;		//����ü ����(a) ����. //struct complex�� ������ Ÿ��.
//	a.real = 10;
//	a.img = 20;
//}

//struct complex ���µ�
//    ------------------
// a: |	real |10|double |
//    ------------------
//    |	img |20| double |
//    ------------------


//������ Ÿ���� ���� ����(sturct complex�پ��� ����)
typedef int myIntType;//�ڷ��� "int"�� ������ "myIntType"�̶�� �θ��ڴ�. int�� myIntType�� ����.


////����ü ���� : ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
//struct complex{
//	double real; //��� ����(member variable)
//	double img;	// ��(ditto) . ���� ����.
//
//}; // �ݵ�� �����ݷ����� ������ �Ѵ�.
//typedef struct complex Complex; //�ڷ��� "struct complex"�� ������ Complex��� �θ��ڴ�.
//
//

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



//�Լ� : conjugate()
//�Է� : ���Ҽ� //���Ҽ� ��������!
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
void convertToConjugate(Complex* x){
	//����ο� -1�� ���Ѵ�
	x->img = -1*(x->img);
}

//�Լ� : returnConjugate
//�Է� : ���Ҽ� ������
//��� : ���Ҽ� ����
//�μ�ȿ�� : ����
Complex* returnConjugate(Complex* ptr){
	Complex temp ;
	temp.real = ptr->real; temp.img = -1*ptr->img;
	return &temp;
}


int main(){
	//����ü ���� ����
	//struct complex a;
	//a.real = 10; // ����ü ������ ������� ���ٹ�� ==> ����ü �����̸�.��������̸�
	//a.img = 20;

	//printf("%f + j%f \n",a.real,a.img);


	//
	myIntType count = 10; //==> int count = 10; �� ����.
	//
	Complex a,b; //==> struct complex a;	
	//����ü ������ ���� ����
	//��κ� ����ü�� ������ ������ ����Ͽ� �����Ѵ�.
	Complex* ptr;
	a.real = 10; // ����ü ������ ������� ���ٹ�� ==> ����ü �����̸�.��������̸�
	a.img = 20; // a��� ����ü������ ���� ���� ����. ���� �Ⱦ�

	//printf("%f + %fj \n",a.real,a.img);
	printComplex(&a);


	ptr = &a;
	ptr->real = 100; //����ü ������ ������ ������� ���� ��� ==> ����ü �����̸� -> ��������̸�
	ptr->img = 200; // ptr�̶�� ����ü �����ͺ����� �̿��Ͽ� ����. -> �̿�. ��κ� �̹�� ���

	printComplex(ptr);


	//b=returnConjugate(&a); printComplex(&b);
	ptr=returnConjugate(&a); printComplex(&b);

	//convertToConjugate(&a); printComplex(&a);


	return 0;
}


//�Ű����� ����	���µ�						complex
//	Complex a ->				 a: real :		10
//							    	 img  :		20
//	printComplex(a); -> #1 �޸� ���� Ȯ��
//							complex
//void printComplex(Complex x)		x:	real :	10 //�̸� �ٿ��� x
//										img :	20		 #2�Ű����� �� ����

//�迭 �����ؼ� �����Ѱ� �ƴ϶� �迭 �״�� ����. 
//why? �迭 �ʹ� ũ�� #1,#2�ϴµ� �ð������ɸ�.
//����ü�� �׷� �� �ִ�. �׷��� ����ü�� �����͸� �Լ��� ������.


//����ü ������ ���� ���� Complex
// Complex* ptr; -> ptr : &a ����� ���� ����Ŵ. <-ptr = &a;


//����ü ������ �Ű����� ���� ���µ�					complex* #1
//					printComplex(&a); -> 	ptr :	 #2 &a(����� a����Ŵ)		
//												void printComplex(Complex* ptr){�̰� ������ ptr�̸� ����



//										complex								complex
//	Complex a ->				 a: real :		10			b: real		:
//							    	 img  :		20				img		:
//														complex*
//	b=returnConjugate(&a); printComplex(&b); -> ptr  :   &a(a����Ŵ)
//														complex
//								Complex temp  ->	temp : real : 10
//													img : -20 --> ������ ���� . temp�� ptr�޸𸮴� �Ҹ� 
//																(�� ����ü ������ �����ϴµ� �ð� ��û �����ɸ�. �׷��� �̷������� ���Ͼ��ϰ� �����͸� ������.)

//������ temp�� �����͸� �����ӿ� ������.		complex*
//b=returnConjugate(&a); ->				 ptr : temp����Ŵ					-> ����� �� �ȳ���. �޸� �Ҹ�Ǽ� �� �ּ� �ٸ� �뵵�� �����.
