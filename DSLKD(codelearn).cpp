#include <stdio.h>
#include <malloc.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *L = NULL;
void create(int n){
	NODE *p = (NODE *) malloc(sizeof(NODE));
	p = L; 
    for(int i = 0; i < n; i++){
    	NODE *p = (NODE *) malloc(sizeof(NODE));
        scanf("%d", &p1->data);
        p1->next = NULL;
        L->next = p;
    }
}
void display(){
    NODE *p = (NODE *) malloc(sizeof(NODE));
    p = L;
    while(p != NULL){
        printf("%d", p->data);
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
