#include <stdio.h>
#include<string.h>

void printArray(char* arr, int len){
	for(int index=0; index<len;index++)
		printf("array[%d] = %c \n",index, arr[index]);

}

int main(){
	char c; //1����Ʈ -128~127 �ƽ�Ű�ڵ� character (����)�� 'A'�� 65
	c = 'A';  //==> c=65; �̷��� ����ȴ�.
	printf("c= %d \n",c); //d�� decimal
	printf("c= %c \n",c); //c�� char //d��c ȭ�鿡 ������� ��µǴ��� ����.

	char a[] = {'h','e','l','l','o'}; //�̷��� ������.
	printArray(a,5);

// �迭���� �� ���ֱ� ����.. ���ڿ��� ���� �� �� �ִ�. 
// ���ڿ� ���� decimal 0(���� null)�� �־��־� ���ڿ��� ���� ã��.
// 0���Ե� �迭 ���̰� �迭�� ����! 
	

	//���ڿ�(String)
	char b[] = "hello";//==> char b[] = {'h','e','l','l','o',\0}; \0==> null // �̷� ""���ڿ�.
	printf("%s \n", b); //�̷� ������ ���ָ� �Ű������� �Լ����� �� �־��൵�ȴ�. ���� �迭�� �������� null�̶�°� �˰������ϱ�.
	
	printf("the length of the string is %d. \n",strlen(b)); //#include<string.h>�������. string �Լ� ������
	
	char str1[50] = "hello";  //���� 50��¥�� char �迭 ���� str1[0]~str1[49]. str1[0]='h',str1[1]='e',str1[2]='l',str1[3]='l',str1[4]='o',str1[5]=\0
	char* str2 = " world";	 //str2[0]~str2[6] 7��¥�� char �迭 ����. ���̿� ���� ���� �����ϱ� �� ���ڰ�����ŭ �迭 ����. str2[0]='_',str2[1]='w',str2[2]='o'�̷������� str2[6]='\0'
	printf("%s \n",strcat(str1,str2)); //strcat�ϸ� str1�� \0���� str2[0]�־ �پ���. str1�� ���� �� �ڱ� ���ڿ� ��ŭ������ str2�� �ڸ���� ������. 

	printf("%s \n",str1);//str1��ü�� ����. hello world
	strcpy(str1,str2); // str2�� str1�� �����. str??????????????
	printf("%s \n",str1); 
	



	
	return 0;
}
