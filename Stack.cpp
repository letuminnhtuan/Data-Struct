#include <stdio.h>
#include <string.h>
#include <malloc.h>
struct pt{
	char c;
	struct pt *next;
};
typedef struct pt kt;
kt *stack = NULL;
void create(char x[]){
	kt *p = (kt *) malloc(sizeof(kt));
	for(int i = 0; i < strlen(x); i++){
		kt *p = (kt *) malloc(sizeof(kt));
		p->c = x[i];
		p->next = stack;
		stack = p;
	}
}
void display(){
	kt *p = (kt *) malloc(sizeof(kt));
	p = stack;
	while(p != NULL){
		printf("%c", p->c);
		p = p->next;
	}
}
int main(){
	char x[30];
	fflush(stdin);
	gets(x);
	create(x);
	display();
	return 0;
}
