#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *pre;
};
node *L = new node;
void input(int n){
	L->data = n;
	L->pre = NULL;
	L->next = NULL;
	node *p = new node;
	p = L;
	for(int i = n-1; i >= 1; i--){
		node *a = new node;
		a->data = i;
		a->next = NULL;
		a->pre = p;
		p->next = a;
		p = a;
	}
}
void output(){
	node *p = new node;
	p = L;
	while(p != NULL){
		cout << p->data << " ";
		if(p->next == NULL) break;
		p = p->next;
	}
	p = p->pre;
	while(p != NULL){
		cout << p->data << " ";
		p = p->pre;
	}	
}
int main(){
	int n;
	cin >> n;
	input(n);
	output();
	return 0;
}
