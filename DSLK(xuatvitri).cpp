#include <iostream>
using namespace std;
struct pt{
    int data;
    struct pt *next;
};
typedef pt PT;
PT *L = new PT;
int main(){
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
	int vt;
	cin >> vt;
	PT *p1 = new PT;
	p1 = L;
	for(int i = 0; i < vt; i++) p1 = p1->next;
	cout << p1->data; 
	return 0;
}
