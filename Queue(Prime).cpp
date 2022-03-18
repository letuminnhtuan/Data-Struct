#include <iostream>
#include <math.h>
using namespace std;
struct node{
	int data;
	node *next;
};
node *Queue = new node;
void input(int n), add(int x), deleteFirst();
int check(int n);
int main(){
	int n;
	cin >> n;
	input(n);
	return 0;
}
void input(int n){
	if(n >= 2){
		Queue->data = 2;
		Queue->next = NULL;
	}
	for(int i = 3; i <= n && i < 10; i++) if(check(i) == 1) add(i);
	node *p = new node;
	p = Queue;
	while(p != NULL){
		for(int i = 1; i <= 9; i++){
			int k = p->data * 10 + i;
			if(k <= n && check(k) == 1) add(k);
		}
		cout << p->data << " ";
		deleteFirst();
		p = Queue;
	}
}
void deleteFirst(){
	node *p = new node;
	p = Queue;
	p = p->next;
	Queue = p;
}
void add(int x){
	node *a = new node, *p = new node;
	a->data = x;
	a->next = NULL;
	p = Queue;
	while(p->next != NULL) p = p->next; 
	p->next = a;
}
int check(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return 0;
	return 1;
}
