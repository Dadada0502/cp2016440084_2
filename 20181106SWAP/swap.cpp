#include <stdio.h>
void swap(int* ptr1, int* ptr2){
		//swap: ���� a, b�� ���� �ٲ۴�.
	int temp;
	temp = *ptr1;
	*ptr1=*ptr2; //������� = �� ptr1�� ����Ű�� ��(a�� ����) b�� ������ �ٲ��
	*ptr2 = temp; // ptr2�� ����Ű�� ��(b�� ��) �ȵȴ�.
}//������ �Ű����� �޸𸮰� �Ҹ�.



	int main(){  
	int a =100, b=200;
	swap(&a,&b);


	printf("a = %d, b=%d \n",a,b);

	return 0;
}
