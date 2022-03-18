#include <iostream>
using namespace std;
struct pt{
    int data;
    struct pt *next;
};
typedef pt PT;
PT *L = new PT;
int main(){
	// Khoi tao danh sach
	int n, x;
	cin >> n >> x;
	L->data = x;
	L->next = NULL;
	PT *p = L;
	for(int i = 1; i < n; i++){
		PT *p1 = new PT;
		cin >> x;
		p1->data = x;
		p1->next = NULL;
		p->next = p1;
		p = p1;
	}
	// Xoa khoi danh sach
	int vt;
	PT *f = new PT;
	f = L;
	cin >> vt;
	if(vt == 0){
		f = f->next;
		L = f;
	}
	else if(vt == n-1){
		for(int i = 0; i < n-2; i++) f = f->next;
		f->next = NULL;
	}
	else{
		for(int i = 0; i < vt-1; i++) f = f->next;
		f->next = f->next->next;
	}
	// Xuat dslk
	PT *k = new PT;
	k = L;
	while(k != NULL){
		cout << k->data << " ";
		k = k->next;
	}
	return 0;
}
