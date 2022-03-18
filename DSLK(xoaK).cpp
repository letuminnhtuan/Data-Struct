#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *L = new node;
node *L1 = new node;
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
		p->next = p1;
		p = p1;
	}
}
void xoa(){
	// Tim gia tri tai phan tu k
	int k, d;
	cin >> k;
	node *p = new node;
	p = L;
	for(int i = 0; i < k; i++) p = p->next;
	d = p->data;
	// Xoa cac gia tri lon hon d
	node *p1 = new node, *p2 = new node;
	p1 = L;
	while(p1 != NULL){
		if(p1->data <= d){
			L1->data = p1->data;
			L1->next = NULL;
			p1 = p1->next;
			break;
		}
		p1 = p1->next;
	}
	p2 = L1;
	while(p1 != NULL){
		node *a = new node;
		if(p1->data <= d){
			a->data = p1->data;
			a->next = NULL;
			p2->next = a;
			p2 = a;
		}
		p1 = p1->next;
	}
}
void output(){
	node *p = new node;
	p = L1;
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}
int main(){
	create();
	xoa();
	output();
	return 0;
}
