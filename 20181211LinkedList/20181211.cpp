//총정리 연결리스트
// 추가 딜리트 쉬움. 연산은 오래걸림
// LISP list process language . list만 가지고놈.
//LinkedList 연습
#include <stdlib.h>
#include <stdio.h>

typedef struct node{
	int score;
	struct node* pNext; //자기자신 가르킴.

}Node;


typedef struct linkedlist{
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;

//함수  printLL()  화면에 연결리스트의 score값을 출력
//입력: 연결리스트
//출력: 없음
//부수효과: 없음

void printLL(LinkedList* pList){
	Node* ptr = pList -> pHead;
	while(ptr != NULL){
		printf("score = %d \n", ptr->score);
		ptr = ptr -> pNext;

	}

}
//이제 stack말고 Heap에서 할거다.
//함수 creatNode() //노드하나를 동적할당으로 생성한다.
//입력: 성적
//출력: 노드하나를 동적할당으로 생성하여 포인터를 반환한다. 이 때 score = 입력, pNext =NULL로 한다.
//부수효과 : 없음
Node* createNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;

}


//함수 addHead()
//입력: 연결리스트의 구조체포인터(LInkedList*), 새 노드 포인터
//출력 : 없음
//부수효과 : 연결리스트 헤드에 새 노드를 추가 
//void addHead(Node* pHead, Node* pNewNode){
//	pNewNode ->pNext = pHead;
//	pHead = pNewNode;
//} 이렇게하면 함수 소멸 되면 pHead안변함. 하는게 없음... 그대로.. 
void addHead(LinkedList* pList, Node* pNewNode){ //pHead를 바꾸고 싶으면 얘의 포인터를 넣자! node*의 주소! node**
	//pList의 pHead,pTail둘다 널이면 pHead,pTail 둘다 New node로.
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
//Head에 있는거 지우기 tail에있는거 지우기 넣기...head ,tail에 집어넣고 지우고..//퀴즈