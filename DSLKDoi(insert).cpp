#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *pre;
};
node *L = new node;
void input(int n), add(int n), addFirst(int x), addLast(int x), output();
int main(){
	int n;
	cin >> n;
	input(n);
	add(n);
	output();
	return 0;
}
void input(int n){
	int x;
	cin >> x;
	L->data = x;
	L->pre = NULL;
	L->next = NULL;
	node *p = new node;
	p = L;
	for(int i = 1; i < n; i++){
		cin >> x;
		node *a = new node;
		a->data = x;
		a->next = NULL;
		a->pre = p;
		p->next = a;
		p = a;
	}
}
void add(int n){
	int k, x;
	cin >> k >> x;
	if(k == 0) addFirst(x);
	else if(k == n) addLast(x);
	else{
		node *p = new node, *a = new node;
		p = L;
		for(int i = 0; i < k-1; i++) p = p->next;
		a->data = x;
		a->next = p->next;
		a->pre = p;
		p->next = a;
	}
}
void addFirst(int x){
	node *p = new node, *a = new node;
	p = L;
	a->data = x;
	a->pre = NULL;
	a->next = p;
	p->next->pre = a;
	p->pre = a;
	p = a;
	L = a;
}
void addLast(int x){
	node *p = new node, *a = new node;
	p = L;
	a->data = x;
	a->next = NULL;
	while(p != NULL){
		if(p->next == NULL) break;
		p = p->next;
	}
	p->next = a;
	a->pre = p;
}
void output(){
	node *p = new node;
	p = L;
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}
