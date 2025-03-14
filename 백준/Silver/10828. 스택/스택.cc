#include <iostream>
#include <string>
using namespace std;

struct node {
	int data; //데이터 필드
	node* next; //링크 필드
};

class listStack {
public:
	listStack(); //기본 생성자
	void push(int X); //정수 X를 스택에 넣는 연산
	void pop(); //스택에서 가장 위에 있는 정수를 빼고, 그 수 출력 연산 
	int size(); //스택에 들어있는 정수의 개수 출력 연산
	bool empty(); //스택이 비어 있는지 확인하는 연산
	int top(); //스택의 가장 위에 있는 정수 출력 연산

private:
	node* topNode; //링크드 리스트의 head 역할
	int listSize; //스택의 크기를 저장하는 변수
};

listStack::listStack() {
	topNode = NULL; //모든 private 변수 초기화
	listSize = 0;
}

void listStack::push(int X) {
	node* newNode = new node(); //새로운 노드 생성
	newNode->data = X; //새로운 노드의 data에 입력값 넣기
	newNode->next = topNode; //새로운 노드의 next를 이전 topNode로 설정
	topNode = newNode; //새로운 노드를 topNode로 설정
	listSize++; 
}

void listStack::pop() {
	if (empty()) {
		cout << "-1";
	}
	else {
		node* curNode = topNode;
		topNode = topNode -> next;
		cout << curNode->data;
		delete curNode;
		listSize--;
	}
}

int listStack::size() {
	return listSize;
}

bool listStack::empty() {
	if (listSize == 0) {
		return true;
	}

	else {
		return false;
	}
}

int listStack::top() {
	if (empty()) {
		return -1;
	}

	else {
		return topNode->data;
	}
}

int main() {
	int N = 1;
	int num = 1;
	string str;
	listStack ls;
	

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;

		if (str == "push") {
			cin >> num;
			ls.push(num);
		}
		else if (str == "pop") {
			ls.pop();
			cout << '\n';
		}
		else if (str == "size") {
			cout << ls.size() << '\n';
		}
		else if (str == "empty") {
			cout << ls.empty() << '\n';
		}
		else if (str == "top") {
			cout << ls.top() << '\n';
		}
	}

	return 0;
}