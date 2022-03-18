#include <stdio.h>
#include <malloc.h>
struct pt{
	int i;
	struct pt *next;
};
typedef struct pt so;
so *stack = NULL;
void create(int n){
	if(n == 0){
		so *p = (so *) malloc(sizeof(so));
		p->i = 0;
		p->next = stack;
		stack = p;
	}
	while(n != 0){
		so *p = (so *) malloc(sizeof(so));
		p->i = n % 2;
		p->next = stack;
		stack = p;
		n = n / 2;
	}
}
void display(){
	so *p = (so *) malloc(sizeof(so));
	p = stack;
	while(p != NULL){
		printf("%d", p->i);
		p = p->next;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	create(n);
	display();
	return 0;
}
