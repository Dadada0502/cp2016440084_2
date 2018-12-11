//��ũ�帮��Ʈ ���µ�, ������
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int score;
	struct node* pNext;

}Node;

void printLL(Node* ptr){
	while(ptr != NULL){
		printf("score = %d \n", ptr->score);
		ptr = ptr -> pNext;

	}

}

double averageLL(Node* ptr){
	int sum = 0 ,count = 0;
	double average;
	while (ptr != NULL){
		sum += ptr->score;
		count++;
		ptr = ptr->pNext;

	}
	average = (double)sum / count;
	return average;

}

Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;

}

void addHead(Node** ppHead, Node* pNewNode){ //pHead�� �ٲٰ� ������ ���� �����͸� ����! node*�� �ּ�! node**
	pNewNode ->pNext = *ppHead;		//ppHead�� �����Ͱ� Node*�� ���׿� ����.
	*ppHead = pNewNode;		//pHead�� node* �� pnewnode ,node*������ . ����������!
}


//�Լ� returnTail()
//�Է�: ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
//���: ������ ����� ������
//�μ�ȿ��: ����

Node* returnTail(Node* ptr){
	if(ptr == NULL){// ���Ḯ��Ʈ�� ��尡 ����
		return NULL; //HEAD �����Ͱ� ���̸� ���Ḯ��Ʈ�� �ƹ��͵� ���ٴ� ��! ���! tail�� ��
	}
	while(ptr != NULL){
		if(ptr -> pNext = NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}


//�Լ� addTail()
//�Է� : ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������
//��� : ����
//�μ�ȿ�� : �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� TAIL�� �߰���
void addTail(Node* pHead, Node* pNode){ 
	if(pHead ==NULL){	//pHead�� pNode�����Ѿ���.
		printf("error \n");
		return;
	}
	Node* pTail = returnTail(pHead); //pHead NULL�̸� pTail �ε�. 
	pTail -> pNext = pNode; // pNode �̹� ���� ũ������Ʈ ����ϸ� �η� �Ǿ������ϱ�
}



//����ȯ
//double test;
//test = 10/4; //1.(10/4)->2����ȯ, 2. ������ 2�� double��2.0���� ��ȯ
//test = 10.0/4 //2.5�� ��ȯ
//test = ((double)10)/4 ; //������ (int) 10�� �Ǽ��� double�� ��ȯ  
//printf("test = %f \n",test);

int main(){
	Node* pHead=NULL, *ptr;
	pHead = createNode(11);
	ptr = createNode(20);
	addHead(&pHead, ptr);
	//addTail(pHead,createNode(100));
	printLL(pHead);
	//printf("%f",averageLL(pHead));
	
	pHead = NULL;


	 
	return 0;

}

//list ���ϰ� doublly linked List . ��忡 �� ���� �Ҵ��ؼ� ���ʿ����� �ι������� �̵�����. ���ݱ����� ���������θ� �̵������߾���
//LinkedList��� ����ü �����. node* pHead, node* pTail�ؼ� Head�� Tail ����Ű���� �����. struct. int nNode ���е� �־ ��� ���� �����ִ�.//���� ���� linked list struct �����...