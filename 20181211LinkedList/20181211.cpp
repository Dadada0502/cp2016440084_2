//������ ���Ḯ��Ʈ
// �߰� ����Ʈ ����. ������ �����ɸ�
// LISP list process language . list�� �������.
//LinkedList ����
#include <stdlib.h>
#include <stdio.h>

typedef struct node{
	int score;
	struct node* pNext; //�ڱ��ڽ� ����Ŵ.

}Node;


typedef struct linkedlist{
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;

//�Լ�  printLL()  ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
//�Է�: ���Ḯ��Ʈ
//���: ����
//�μ�ȿ��: ����

void printLL(LinkedList* pList){
	Node* ptr = pList -> pHead;
	while(ptr != NULL){
		printf("score = %d \n", ptr->score);
		ptr = ptr -> pNext;

	}

}
//���� stack���� Heap���� �ҰŴ�.
//�Լ� creatNode() //����ϳ��� �����Ҵ����� �����Ѵ�.
//�Է�: ����
//���: ����ϳ��� �����Ҵ����� �����Ͽ� �����͸� ��ȯ�Ѵ�. �� �� score = �Է�, pNext =NULL�� �Ѵ�.
//�μ�ȿ�� : ����
Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;

}


//�Լ� addHead()
//�Է�: ���Ḯ��Ʈ�� ����ü������(LInkedList*), �� ��� ������
//��� : ����
//�μ�ȿ�� : ���Ḯ��Ʈ ��忡 �� ��带 �߰� 
//void addHead(Node* pHead, Node* pNewNode){
//	pNewNode ->pNext = pHead;
//	pHead = pNewNode;
//} �̷����ϸ� �Լ� �Ҹ� �Ǹ� pHead�Ⱥ���. �ϴ°� ����... �״��.. 
void addHead(LinkedList* pList, Node* pNewNode){ //pHead�� �ٲٰ� ������ ���� �����͸� ����! node*�� �ּ�! node**
	//pList�� pHead,pTail�Ѵ� ���̸� pHead,pTail �Ѵ� New node��.
	if(pList->pHead == NULL){
		pList -> pTail = pNewNode;
	}
	//#1
	pNewNode->pNext = pList->pHead;
	//#2
	pList -> pHead = pNewNode; 

	(pList -> nNode)++;
}



int main(){

	LinkedList* pList;
	pList = (LinkedList*)malloc(sizeof(LinkedList));
	pList->pHead = pList->pTail = NULL; pList->nNode = 0;
	addHead(pList,createNode(10));
	addHead(pList,createNode(10));
	addHead(pList,createNode(10));
	addHead(pList,createNode(10));
	addHead(pList,createNode(10));

	printLL(pList);


	return 0;
}
//Head�� �ִ°� ����� tail���ִ°� ����� �ֱ�...head ,tail�� ����ְ� �����..//����