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
//함수  printLL()  화면에 연결리스트의 score값을 출력
//입력: 연결리스트 (연결리스트의 헤드노드 포인터)
//출력: 없음
//부수효과: 없음

void printLL(Node* ptr){
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
//입력: 연결리스트, 새 노드 아님. //연결리스트의 이중포인터(헤드포인터의 포인터), 새 노드 
//출력 : 없음
//부수효과 : 연결리스트 헤드에 새 노드를 추가 
//void addHead(Node* pHead, Node* pNewNode){
//	pNewNode ->pNext = pHead;
//	pHead = pNewNode;
//} 이렇게하면 함수 소멸 되면 pHead안변함. 하는게 없음... 그대로.. 
void addHead(Node** ppHead, Node* pNewNode){ //pHead를 바꾸고 싶으면 얘의 포인터를 넣자! node*의 주소! node**
	pNewNode ->pNext = *ppHead;		//ppHead의 데이터값 Node*를 우항에 넣음.
	*ppHead = pNewNode;		//pHead값 node* 를 pnewnode ,node*값으로 . 이중포인터!
}



int main(){
	//Node a,b;	//a,b stack 사용.
	//a.score = 10;
	//b.score = 20;
	//a.pNext = &b;
	//b.pNext = NULL;
	//pHead = &a;

	Node* pHead = NULL ,*ptr; //헤드노드의 포인터. NULL이면 연결리스트가 없다는 의미(로 약속하자)
	pHead = createNode(10);
	/*pHead->pNext = createNode(20);*/
	ptr = createNode(20);
	/*addHead(pHead,ptr);*/ //->이렇게하면 안됨
	addHead(&pHead, ptr);
	printLL(pHead);
	return 0;
}


//					node			node
//node a,b -> a: 10| b가르킴	b:20 | 접지(NULL)
//이걸로 퀴즈 5개.......

//#1			Node*
//			ptr: a가르킴
//ptr = ptr->pNext; -> ptr : b가르킴
//ptr = ptr->pNext; -> ptr : null -->끝남.




//		Node*
//pHead

//pHead = create Node(10); ---> 10
//createNode(int input) ---> input: 10
//						Node*									Heap node
//Node*ptr; --> ptr: Heap의 Node 가르킴								10|접지-> 밑의 노드 가르킴
//pHead->pNext = createNode(20);									20|접지



//			stack										Heap			
//main:: pHead: node*(오른쪽 노드 가르킴)			node(10|접지)
//main::ptr	  : node*(오른쪽 노드 가르킴)								node(20| 접지)



//pHead의 주소 ppHead. pHead는 node*