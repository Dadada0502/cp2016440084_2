#include <stdio.h>

int main(){

	//============��а� �� ���� �����ϼ���....
	// ctrl - ] :matching  parenthesis
	// ctrl -jk, ctrl-f : format������
	// ctrl-k, ctrl-c : comment out// ������ ���� �ּ�ó��
	// ctrl-k, ctrl-u : undo comment out
	//
	//int count = 1;
	//while(count <=10){
	//	printf("count = %d \n", count);
	//	count = count +1;
	//}

	//
	//int count = 1;

	//�ݺ�������
	//while(count <= 10)
	//	printf("count = %d\n",count++); 

	////�ݺ��� ��



	////1���� ���� 100���� 3�ǹ�� ������  ȭ�鿡 ���
	//count =1;
	//while(count <=100){
	//	if (count%3 ==0)
	//		printf("count = %d \n",count);
	//	count++;
	//}


		//1���� ���� 100���� 3�ǹ���� ������ ������  ȭ�鿡 ���
	//count =1;
	//while(count <=100){
	//	if (count%3 !=0)
	//		printf("count = %d \n",count);
	//	count++;
	//}


	//Ű���忡�� ������ ��� �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷�
	//���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� �����Ѵ�.

	//int input;
	//while(1){
	//	printf("������ �Է��ϼ���: ");
	//	scanf("%d",&input);
	//	if(input == 100) break;

	//	if(input >1000){
	//		printf("�Է��� ������ 1000���� Ů�ϴ�. �ٽ� �Է��� �ּ��� \n");
	//		continue; // ���ǽ����ΰ��µ� 1�� �� ���̹Ƿ� ���� ������.

	//	}
	//		if(input%3 == 0)
	//			printf("�Է��� ���� %d�� 3�� ����Դϴ� \n", input);

	//		else 
	//			printf("�Է��� ���� %d�� 3�� ����� �ƴմϴ�. \n",input);

	//	
	//}

	//1���� 100������ ������ ���� ���Ͻÿ�
	int sum = 0;
	int i = 1;
	while(i<=100){
		//sum = sum + i;
		//i++;
		//sum = sum + i++;

		sum += i++;
	}

	printf("the sum is %d \n", sum);

	//============��а� �� �Ʒ��� �����ϼ���
	return 0;

}