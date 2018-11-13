#include<stdio.h>

//함수 : findMinIndex()
//입력 : 배열(배열이름, 배열길이)
//출력 : 최소값의 인덱스
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
//함수 : findMin()
//입력 : 배열(배열이름, 배열길이)
//출력 : 최소값
int findMin(int* a, int length,int firstIndex){
	int min=a[firstIndex];

	for(firstIndex;firstIndex<length;firstIndex++){
		if(a[firstIndex]<min){
			min = a[firstIndex];
		}
	}

	return min;
}

//함수 : swapElement
//입력 : 배열, 최소값의 인덱스, 처음 인덱스
//출력 : 없음
//부수효과 : 배열의 두 인덱스 달라짐
void swapElement(int* a,int minIndex, int firstIndex){
	int temp = a[firstIndex];

	a[firstIndex]= a[minIndex];
	a[minIndex] = temp;


}

void printArray(int arr[], int len){
	for(int index=0; index<len;index++)
		printf("array[%d] = %d \n",index, arr[index]);

}

//함수 : selectionSort()
//입력 : 배열
//출력 : 없음
//부수효과 : 배열이 정렬됨

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