#include <stdio.h>
#include <malloc.h>
typedef struct node{
    int data;
    struct node *next;
} NODE;
NODE *L = NULL;
NODE cre(){
    NODE *p = (NODE *) malloc(sizeof(NODE));
    scanf("%d", &p->data);
    p->next = NULL;
    return *p;
}
void display(){
    NODE *p = (NODE *) malloc(sizeof(NODE));
    p = L;
    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
}
void create(int n){
    int i;
    NODE *p = (NODE *) malloc(sizeof(NODE));
    p = L; 
	for(i = 1; i <= n; i++){
		*p = cre();
		L->next = p;
	}
}
int main(){
    int n;
    scanf("%d", &n);
    create(n);
    display();
    return 0;
}
