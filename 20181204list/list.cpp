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
//�Լ�  printLL()  ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
//�Է�: ���Ḯ��Ʈ (���Ḯ��Ʈ�� ����� ������)
//���: ����
//�μ�ȿ��: ����

void printLL(Node* ptr){
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
//�Է�: ���Ḯ��Ʈ, �� ��� �ƴ�. //���Ḯ��Ʈ�� ����������(����������� ������), �� ��� 
//��� : ����
//�μ�ȿ�� : ���Ḯ��Ʈ ��忡 �� ��带 �߰� 
//void addHead(Node* pHead, Node* pNewNode){
//	pNewNode ->pNext = pHead;
//	pHead = pNewNode;
//} �̷����ϸ� �Լ� �Ҹ� �Ǹ� pHead�Ⱥ���. �ϴ°� ����... �״��.. 
void addHead(Node** ppHead, Node* pNewNode){ //pHead�� �ٲٰ� ������ ���� �����͸� ����! node*�� �ּ�! node**
	pNewNode ->pNext = *ppHead;		//ppHead�� �����Ͱ� Node*�� ���׿� ����.
	*ppHead = pNewNode;		//pHead�� node* �� pnewnode ,node*������ . ����������!
}



int main(){
	//Node a,b;	//a,b stack ���.
	//a.score = 10;
	//b.score = 20;
	//a.pNext = &b;
	//b.pNext = NULL;
	//pHead = &a;

	Node* pHead = NULL ,*ptr; //������� ������. NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� �������)
	pHead = createNode(10);
	/*pHead->pNext = createNode(20);*/
	ptr = createNode(20);
	/*addHead(pHead,ptr);*/ //->�̷����ϸ� �ȵ�
	addHead(&pHead, ptr);
	printLL(pHead);
	return 0;
}


//					node			node
//node a,b -> a: 10| b����Ŵ	b:20 | ����(NULL)
//�̰ɷ� ���� 5��.......

//#1			Node*
//			ptr: a����Ŵ
//ptr = ptr->pNext; -> ptr : b����Ŵ
//ptr = ptr->pNext; -> ptr : null -->����.




//		Node*
//pHead

//pHead = create Node(10); ---> 10
//createNode(int input) ---> input: 10
//						Node*									Heap node
//Node*ptr; --> ptr: Heap�� Node ����Ŵ								10|����-> ���� ��� ����Ŵ
//pHead->pNext = createNode(20);									20|����



//			stack										Heap			
//main:: pHead: node*(������ ��� ����Ŵ)			node(10|����)
//main::ptr	  : node*(������ ��� ����Ŵ)								node(20| ����)



//pHead�� �ּ� ppHead. pHead�� node*