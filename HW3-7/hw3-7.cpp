//7. ���� �迭�� ���� ��ȯ�ϴ� �Լ�
#include <stdio.h>


//�Լ� �̸�: addArray()
//�Է� : �迭
//��� : �迭 �� ��ҵ��� ��
//�μ�ȿ�� : ����

int addArray(int arr[], int length){
	int index = 0;
	int sum=0;	
	while(index <length)
		sum += arr[index++];
	//printf("this sum is %d \n",sum);




	return sum;
}

int main(){

	int a[4] = {10,20,30,40};
	int length = 4;
	
	addArray(a,length);

	printf("this sum is %d \n",addArray(a,length));



	return 0;
}




//���� �迭 a[],length �ʱⰪ �־����ٰ����
//	intdex = 0, sum = 0
//
//	(���ǹ�) index < length 
//T: sum +=a[index]						F: ����
//index ++ �ٽ� ���ǹ�����
