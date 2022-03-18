#include <stdio.h>
#include <malloc.h> 
#include <string.h>
struct pt{
	char c;
	struct pt *next;
};
int b[100];
typedef struct pt chu;
chu *stack = NULL, *stack1 = NULL;
void create(char x[]){
	int n = strlen(x), j = 0;
	for(int i = 0; i < n; i++){
		chu *p = (pt *) malloc(sizeof(pt));
		p->c = x[i];
		p->next = stack;
		stack = p;
	}
}
void display(){
	chu *p = (pt *) malloc(sizeof(pt));
	p = stack;
	int j = 0;
	while(p != NULL){
		printf("%c", p->c);
		p = p->next;
	}
}
int main(){
	char x[100];
	fflush(stdin); gets(x);
	create(x);
	display();
	return 0;
}
