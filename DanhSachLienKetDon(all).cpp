/*
a. Tao 1 danh sach lien ket don
b. Nhap vao danh sach lien ket don do 1 mang so nguyen
c. Them cac phan tu vao danh sach lien ket don (Them vao dau, Them vao cuoi, Them vao cho bat ki)
d. Xoa cac phan tu vao danh sach lien ket don (Xoa o dau, Xoa o cuoi, Xoa o cho bat ki)
e. Tim kiem phan tu
*/
#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
// ---------------------------------------------------------------------------
// Tao 1 danh sach lien ket don
node *L = new node;
// Nhap vao danh sach 1 mang so nguyen
void create();
// ---------------------------------------------------------------------------
// Them phan tu vao danh sach lien ket
// 1. Them vao dau
void themdau();
// 2. Them vao cuoi
void themcuoi();
// 3. Them vao vi tri chi dinh
void them();
// ---------------------------------------------------------------------------
// Xoa cac phan tu khoi danh sach lien ket
// 1. Xoa phan tu dau tien
void xoadau();
// 2. Xoa phan tu cuoi 
void xoacuoi();
// 3. Xoa phan tu bat ki
void xoa();
// ---------------------------------------------------------------------------
// Tim kiem phan tu
void tim();
// ---------------------------------------------------------------------------
// Xuat danh sach lien ket
void output();
// ---------------------------------------------------------------------------
int main(){
	cout << "a. Nhap vao danh sach lien ket don do 1 mang so nguyen" << endl;
	cout << "b. Them cac phan tu vao danh sach lien ket don (Them vao dau, Them vao cuoi, Them vao cho bat ki)" << endl;
	cout << "c. Xoa cac phan tu vao danh sach lien ket don (Xoa o dau, Xoa o cuoi, Xoa o cho bat ki)" << endl;
	cout << "d. Tim kiem phan tu" << endl;
	cout << "e. Xuat danh sach lien ket" << endl;
	cout << "q. Thoat khoi chuong trinh" << endl;
	char t;
	while(t != 'q' && t != 'Q'){
		cout << "\nChon 1 cau: ";
		cin >> t;
		switch(t){
			case 'a': create(); break;
			case 'b': themdau(); themcuoi(); them(); break;
			case 'c': xoadau(); xoacuoi(); xoa(); break;
			case 'd': tim(); break;
			case 'e': output();
		}
	}
	return 0;
}
// ---------------------------------------------------------------------------
// Nhap vao danh sach 1 mang so nguyen
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
// ---------------------------------------------------------------------------
// Them phan tu vao danh sach lien ket
// 1. Them vao dau
void themdau(){
	node *k = new node;
	cout << "Nhap gia tri can them vao dau: ";
	cin >> k->data;
	k->next = L;
	L = k;
}
// 2. Them vao cuoi
void themcuoi(){
	node *k = new node;
	cout << "Nhap gia tri can them vao cuoi: ";
	cin >> k->data;
	k->next = NULL;
	node *p = new node;
	p = L;
	while(p->next != NULL) p = p->next;
	p->next = k;
}
// 3. Them vao vi tri chi dinh
void them(){
	int vt;
	cout << "Nhap vi tri va gia tri can them: ";
	cin >> vt;
	node *k = new node;
	cin >> k->data;
	node *p = new node;
	p = L;
	for(int i = 0; i < vt-1; i++) p = p->next;
	k->next = p->next;
	p->next = k;
	L = p;
}
// ---------------------------------------------------------------------------
// Xoa cac phan tu khoi danh sach lien ket
// 1. Xoa phan tu dau tien
void xoadau(){
	node *p = new node;
	p = L;
	p = p->next;
	L = p;
}
// 2. Xoa phan tu cuoi 
void xoacuoi(){
	node *p = new node;
	p = L;
	while(p->next->next != NULL) p = p->next;
	p->next = NULL;
}
// 3. Xoa phan tu bat ki
void xoa(){
	int vt;
	cout << "Nhap vi tri can xoa: ";
	cin >> vt;
	node *p = new node;
	p = L;
	for(int i = 0; i < vt-1; i++) p = p->next;
	p->next = p->next->next;
}
// ---------------------------------------------------------------------------
// Tim kiem phan tu
void tim(){
	int k;
	cin >> k;
	node *p = new node;
	p = L;
	while(p != NULL){
		if(p->data == k) cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
// ---------------------------------------------------------------------------
// Xuat danh sach lien ket
void output(){
	node *p = new node;
	p = L;
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
