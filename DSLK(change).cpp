#include <iostream>
using namespace std;
typedef struct node{
    int data;
    node *next;
} NODE;
void output(NODE *L){
	NODE *p = new NODE;
	p = L;
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}
int main(){
    NODE *L = new NODE;
    int n, x, a, b;
    cin >> n >> x;
    L->data = x;
	L->next = NULL;
	NODE *p = L;
	for(int i = 1; i < n; i++){
		NODE *p1 = new NODE;
		cin >> x;
		p1->data = x;
		p1->next = NULL;
		p->next = p1;
		p = p1;
	}
    // Thay doi gia tri
    cin >> a >> b;
    NODE *p1 = new NODE;
    p1 = L;
    while(p1 != NULL){
        if(p1->data == a) p1->data = b;
        p1 = p1->next;
    }
    // Xuat danh sach lien ket
    output(L);
    return 0;
} 
