#include <stdio.h>
#include<string.h>

void printArray(char* arr, int len){
	for(int index=0; index<len;index++)
		printf("array[%d] = %c \n",index, arr[index]);

}

int main(){
	char c; //1바이트 -128~127 아스키코드 character (문자)형 'A'는 65
	c = 'A';  //==> c=65; 이렇게 저장된다.
	printf("c= %d \n",c); //d는 decimal
	printf("c= %c \n",c); //c는 char //d와c 화면에 어떤식으로 출력되는지 결정.

	char a[] = {'h','e','l','l','o'}; //이렇게 사용안함.
	printArray(a,5);

// 배열길이 늘 쳐주기 귀찮.. 문자열의 길이 알 수 있다. 
// 문자열 끝에 decimal 0(문자 null)을 넣어주어 문자열의 길이 찾기.
// 0포함된 배열 길이가 배열의 길이! 
	

	//문자열(String)
	char b[] = "hello";//==> char b[] = {'h','e','l','l','o',\0}; \0==> null // 이런 ""문자열.
	printf("%s \n", b); //이런 식으로 해주면 매개변수로 함수길이 안 넣어줘도된다. 위에 배열의 마지막이 null이라는걸 알고있으니까.
	
	printf("the length of the string is %d. \n",strlen(b)); //#include<string.h>해줘야함. string 함수 쓰려면
	
	char str1[50] = "hello";  //길이 50개짜리 char 배열 생성 str1[0]~str1[49]. str1[0]='h',str1[1]='e',str1[2]='l',str1[3]='l',str1[4]='o',str1[5]=\0
	char* str2 = " world";	 //str2[0]~str2[6] 7개짜리 char 배열 생성. 길이에 대한 말이 없으니까 딱 문자갯수만큼 배열 생성. str2[0]='_',str2[1]='w',str2[2]='o'이런식으로 str2[6]='\0'
	printf("%s \n",strcat(str1,str2)); //strcat하면 str1의 \0부터 str2[0]넣어서 붙어짐. str1의 길이 딱 자기 문자열 만큼있으면 str2들어갈 자리없어서 에러남. 

	printf("%s \n",str1);//str1자체가 변함. hello world
	strcpy(str1,str2); // str2가 str1에 복사됨. str??????????????
	printf("%s \n",str1); 
	



	
	return 0;
}
