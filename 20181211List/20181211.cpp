//링크드리스트 상태도, 순서도
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

void addHead(Node** ppHead, Node* pNewNode){ //pHead를 바꾸고 싶으면 얘의 포인터를 넣자! node*의 주소! node**
	pNewNode ->pNext = *ppHead;		//ppHead의 데이터값 Node*를 우항에 넣음.
	*ppHead = pNewNode;		//pHead값 node* 를 pnewnode ,node*값으로 . 이중포인터!
}


//함수 returnTail()
//입력: 연결리스트 (연결리스트의 헤드노드 포인터)
//출력: 마지막 노드의 포인터
//부수효과: 없음

Node* returnTail(Node* ptr){
	if(ptr == NULL){// 연결리스트에 노드가 없음
		return NULL; //HEAD 포인터가 널이면 연결리스트에 아무것도 없다는 뜻! 약속! tail도 널
	}
	while(ptr != NULL){
		if(ptr -> pNext = NULL)
			return ptr;
		ptr = ptr->pNext;
	}
}


//함수 addTail()
//입력 : 연결리스트, 추가하려는 노드 포인터
//출력 : 없음
//부수효과 : 추가하려는 노드가 연결리스트의 TAIL로 추가됨
void addTail(Node* pHead, Node* pNode){ 
	if(pHead ==NULL){	//pHead가 pNode가리켜야함.
		printf("error \n");
		return;
	}
	Node* pTail = returnTail(pHead); //pHead NULL이면 pTail 널됨. 
	pTail -> pNext = pNode; // pNode 이미 널임 크리에이트 노드하면 널로 되어있으니까
}



//형변환
//double test;
//test = 10/4; //1.(10/4)->2를반환, 2. 정수형 2를 double형2.0으로 변환
//test = 10.0/4 //2.5를 반환
//test = ((double)10)/4 ; //정수형 (int) 10을 실수형 double로 변환  
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

//list 편하게 doublly linked List . 노드에 값 세개 할당해서 왼쪽오른쪽 두방향으로 이동가능. 지금까지는 오른쪽으로만 이동가능했었음
//LinkedList라는 구조체 만들기. node* pHead, node* pTail해서 Head랑 Tail 가르키도록 만들기. struct. int nNode 성분도 넣어서 노드 수도 볼수있다.//퀴즈 뭔가 linked list struct 만들기...