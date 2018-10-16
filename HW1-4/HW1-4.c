#include<stdio.h>

char checkgrade(int a){

char grade;


if (80<=a&&a<=100) grade = 'a';

else if (60<=a&&a<=79) grade = 'b';

else if (40<=a&&a<=59) grade = 'c';

else if (20<=a&&a<=39) grade = 'd';

else grade = 'e';

return grade;
}


int main()
{
    int num1;

	char grade ;

    printf("점수를 입력하세요: ");
    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장

    grade = checkgrade(num1);

    printf("grade: %c \n ", grade);    // 변수의 내용을 출력


    return 0;
}