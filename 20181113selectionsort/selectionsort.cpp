#include<stdio.h>

//�Լ� : findMinIndex()
//�Է� : �迭(�迭�̸�, �迭����)
//��� : �ּҰ��� �ε���
int findMinIndex(int* a, int length,int firstIndex){
	int min= a[firstIndex+1];
	int minIndex=firstIndex+1;

	for(int i=firstIndex;i<length;i++){
		if(a[i]<min){
			min = a[i];
			minIndex = i;
		}
	}

	return minIndex;
}
//�Լ� : findMin()
//�Է� : �迭(�迭�̸�, �迭����)
//��� : �ּҰ�
int findMin(int* a, int length,int firstIndex){
	int min=a[firstIndex];

	for(firstIndex;firstIndex<length;firstIndex++){
		if(a[firstIndex]<min){
			min = a[firstIndex];
		}
	}

	return min;
}

//�Լ� : swapElement
//�Է� : �迭, �ּҰ��� �ε���, ó�� �ε���
//��� : ����
//�μ�ȿ�� : �迭�� �� �ε��� �޶���
void swapElement(int* a,int minIndex, int firstIndex){
	int temp = a[firstIndex];

	a[firstIndex]= a[minIndex];
	a[minIndex] = temp;


}

void printArray(int arr[], int len){
	for(int index=0; index<len;index++)
		printf("array[%d] = %d \n",index, arr[index]);

}

//�Լ� : selectionSort()
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : �迭�� ���ĵ�

void selectionSort(int* a,int length){
	for(int firstIndex = 0; firstIndex<length-1;firstIndex++)
		
		swapElement(a,findMinIndex(a,length,firstIndex),firstIndex);


}



int main(){  
	int a[] = {30,35,27,15,40}; 


	printf("minimum value of the array is %d \n", findMin(a,5,0));
	printf("The index of the minimum value is %d \n", findMinIndex(a,50,0));

	selectionSort(a,5);
	//swapElement(a,0,3);
	printArray(a,5);

	return 0;
}