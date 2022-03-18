#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *L = new node;
void create(){
	int n, x;
	cout << "Nhap so luong va cac gia tri cua danh sach lien ket: ";
	cin >> n >> x;
	L->data = x;
	L->next = NULL;
	node *p = new node;
	p = L;
	for(int i = 1; i < n; i++){
		node *p1 = new node;
		cin >> x;
		p1->data = x;
		p1->next = NULL;
		if(p == NULL) p = p1;
		else{
			p->next = p1;
			p = p1;
		}
	}
}
void Swap(node *a, node *b){
	int x;
	x = a->data;
	a->data = b->data;
	b->data = x;
}
void sort(){
	node *p = new node;
	p = L;
	while(p != NULL){
		node *p1 = new node;
		p1 = L;
		while(p1 != NULL){
			if(p->data < p1->data) Swap(p, p1);
			p1 = p1->next;
		}
		p = p->next;
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
	create();
	sort();
	output();
	return 0;
}
