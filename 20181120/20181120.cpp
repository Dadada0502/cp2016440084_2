#include<stdio.h>
//review
//��ǻ���� ���
//	1.�޸�����
//		�ڷ���, ����, �迭, ������, ���µ�				//�迭�� �̸� �����ͷ� ��밡��.
//	2.����
//		����,������
//	3.��������
//		����,���ǹ�,�ݺ���,���չ�(�������� �ѹ�������)
// �˰���?
//	1.����Ǫ�� ��� ; step - by - step
//		(����)��, (1-1) ��ǻ�� ��ɸ� ���. 30 27 42 ���� �� �� ���� �ϳ��� �ۿ� ����
//				  (1-2) ������ step 
//���ȭ			-> �� : �Լ�
//	1. ����
//	2. ���(����)
//
//���α׷��� ���
//	1. ��ǻ���� ��� 3���� ����
//	2. �߻�ȭ ���� - �Լ�    // �Լ�,����ü ���ļ� class����� -> ��ü�������α׷���
//				   - ����ü
//

//��������
//20 30 13 24
//20 30				20���ٰ� 30�߰�. 30�� ũ�ϱ� �ڿ� ����
//13 20 30			20,30�� 13�߰�. 13�� ũ�ϱ� �� �տ� ����
//13 20 24 30		13,20,30�� 24�߰�. ũ�� ���缭 ����

void swapElement(int* a,int minIndex, int firstIndex){
	int temp = a[firstIndex];
	a[firstIndex]= a[minIndex];
	a[minIndex] = temp;
}

//{37,42,45,50} 40�߰�
//�Լ��̸�: insertElement 
//�Լ� �Է�: �迭, �����Ϸ��� ����� �ε��� //���� : �Էµ� �迭�� �̹� ���ĵǾ��ִ�.
//��ȯ �� : ����
//�μ�ȿ�� : �迭�� ele��ұ��� ���ĵ�
void insertElement(int* arr,int element){
	element = 4;
	while(element>0){
		if(arr[element-1]>arr[element]) //���� ��Ұ� ũ�� �� ��Ҹ� �ٲٰ�
			swapElement(arr,element-1,element);
				
		else break; //������ ��
		element --;
	}
}

//�Լ� : insertSort()
//�Է� : �迭
//��� : ����
//�μ�ȿ��: �迭�� ���ĵ�
void insertionSort(int* arr, int length){
	
	for(int i=0; i<length;i++){
		insertElement(arr,i);
	}

}

void printArray(int arr[], int len){
	for(int index=0; index<len;index++)
		printf("array[%d] = %d \n",index, arr[index]);

}


int main(){

	int a[] = {37,42,45,50,40};

	insertionSort(a,5);
	printArray(a,5);


	return 0;
}

//������
//�ʱ�ȭ			ele = 4
//���ǹ�1������		ele != 0
//true				���ǹ� 2
//false				break
//���ǹ�2������		arr[ele-1]>arr[ele]
//true				break
//false				swapElement(arr,ele-1,ele)
//					ele --

