#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *L = new node;
void input(int n), output(int n);
int main(){
	int n;
	cin >> n;
	input(n);
	output(n);
	return 0;
}
void input(int n){
	int x;
	cin >> x;
	L->data = x;
	L->next = NULL;
	node *p = new node;
	p = L;
	for(int i = 1; i < n; i++){
		cin >> x;
		node *a = new node;
		a->data = x;
		a->next = NULL;
		p->next = a;
		p = a;
	}
	p->next = L;
}
void output(int n){
	int k;
	cin >> k;
	node *p = new node;
	p = L;
	for(int i = 0; i < k; i++) p = p->next;
	for(int i = 0; i < n; i++){
		cout << p->data << " ";
		p = p->next;
	}
}
