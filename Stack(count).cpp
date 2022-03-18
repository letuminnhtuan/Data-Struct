#include <iostream>
#include <string>
using namespace std;
void count(string str);
struct node{
	char c;
	int data;
	node *next;
};
node *stack = new node;
int main(){
	string str;
	cin >> str;
	count(str);
	return 0;
}
void count(string str){
	int n = str.length();
	stack->c = str[n-1];
	stack->data = 1;
	stack->next = NULL;
	node *p = new node;
	p = stack;
	for(int i = n-2; i >= 0; i--){
		if(str[i] == p->c) p->data += 1;
		else{
			node *a = new node;
			a->c = str[i];
			a->data = 1;
			a->next = p;
			p = a;
		}
	}
	node *k = new node;
	k = p;
	while(k != NULL){
		cout << k->c << k->data;
		k = k->next;
	}
}
