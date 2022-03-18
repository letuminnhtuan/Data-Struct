#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *Queue = new node;
void input(), output(), deleteFirst(), insertLast();
int main(){
	input();
	int k;
	cin >> k;
	for(int i = 0; i < k; i++){
		insertLast();
		deleteFirst();
	}
	output();
	return 0;
}
void input(){
	int n, x;
	cin >> n >> x;
	Queue->data = x;
	Queue->next = NULL;
	node *p = new node;
	p = Queue;
	for(int i = 1; i < n; i++){
		cin >> x;
		node *a = new node;	
		a->data = x;
		a->next = NULL;
		p->next = a;
		p = a;
	} 
}
void deleteFirst(){
	node *p = new node;
	p = Queue;
	p = p->next;
	Queue = p;
}
void insertLast(){
	node *p = new node;
	p = Queue;
	node *a = new node;
	a->data = p->data;
	a->next = NULL;
	while(p->next != NULL) p = p->next;
	p->next = a;
}
void output(){
	node *p = new node;
	p = Queue;
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}
