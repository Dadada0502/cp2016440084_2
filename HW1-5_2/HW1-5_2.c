#include<stdio.h>

int main()
{
    char s1[10];



    printf(" choose one of the following.\n apple\n orange\n banana\n peach\n choose one:");
    scanf("%s", &s1);    // 표준 입력을 받아서 변수에 저장

		printf("Your choice is %s\n ", s1);    // 변수의 내용을 출력


    return 0;
}