#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
	node *pre;
};
node *L = new node;
int Abs(int n){
	if(n >= 0) return n;
	else return -n;
}
void input(int n){
	L->data = n;
	L->pre = NULL;
	L->next = NULL;
	node *p = new node;
	p = L;
	for(int i = -n+1; i <= n; i++){
		if(i != 0 && i != -1){
			node *a = new node;
			a->data = Abs(i);
			a->next = NULL;
			a->pre = p;
			p->next = a;
			p = a;
		}
	}
}
void output(){
	node *p = new node;
	p = L;
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}
int main(){
	int n;
	cin >> n;
	input(n);
	output();
	return 0;
}
