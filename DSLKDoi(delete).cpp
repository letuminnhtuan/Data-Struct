#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *pre;
};
node *L = new node;
void input(int n), Delete(int *n), DeleteFirst(int *n), DeleteLast(int *n), output();
int main(){
	int n;
	cin >> n;
	input(n);
	Delete(&n);
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
void Delete(int *n){
	int k;
	cin >> k;
	if(k == 0) DeleteFirst(n);
	else if(k == *n) DeleteLast(n);
	else{
		node *p = new node;
		p = L;
		for(int i = 0; i < k-1; i++) p = p->next;
		p->next->pre = p;
		p->next = p->next->next;
	}
	*n -= 1;
}
void DeleteFirst(int *n){
	node *p = new node;
	p = L;
	p = p->next;
	p->pre = NULL;
	L = p;
	*n -= 1;
}
void DeleteLast(int *n){
	node *p = new node;
	p = L;
	while(p != NULL){
		p = p->next;
		if(p->next->next == NULL) break;
	}
	p->next = NULL;
	*n -= 1;
}
void output(){
	node *p = new node;
	p = L;
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}
