#include <iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *Queue = new node;
void input(int n, int a[], int *count), output();
int main(){
	int n, a[1000], count;
	cin >> n;
	for(int i = 0; i <= n; i++) a[i] = 0;
	input(n, a, &count);
	int k;
	cin >> k;
	if(count <= k) output();
	else {
		node *p = new node;
		p = Queue;
		for(int i = 1; i <= count-k; i++) p = p->next;
		while(p != NULL){
			cout << p->data << " ";
			p = p->next;
		}
	}
}
void input(int n, int a[], int *count){
	int x;
	*count = 1;
	cin >> x;
	a[x] = 1;
	Queue->data = x;
	Queue->next = NULL;
	node *p = new node;
	p = Queue;
	for(int i = 1; i < n; i++){
		cin >> x;
		if(a[x] != 1){
			node *b = new node;
			b->data = x;
			b->next = NULL;
			p->next = b;
			p = b;
			a[x] = 1;
			*count += 1;
		}
	}
}
void output(){
	node *p = new node;
	p = Queue;
	while(p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}
