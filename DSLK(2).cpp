#include <stdio.h>
#include <malloc.h>
#include <math.h>
struct queue{
    int data;
    struct queue *next;
};
typedef struct queue QUEUE;
void create(int n, QUEUE *Q){
    while(n != 0){
    	QUEUE *p = (QUEUE *) malloc(sizeof(QUEUE));
		p->data = n % 10;
		p->next = Q;
		Q = p;
		n = n / 10;
    }
}
int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++) if(n % i == 0) return 0;
	return 1;
}
int check(QUEUE *Q){
	QUEUE *p = (QUEUE *) malloc(sizeof(QUEUE));
	p = Q;
	int k = 0;
	while(p != NULL){
		k = 10 * k + p->data;
		if(snt(k) == 0) return 0;
		else p = p->next;
		printf("%d", k);
	}
	return 1;
}
void out(QUEUE *Q){
	QUEUE *p = (QUEUE *) malloc(sizeof(QUEUE));
	p = Q;
	while(p != NULL){
		printf("%d", p->data);
		p = p->next;
	}
}
int main(){
	int n; 
	scanf("%d", &n);
	QUEUE *Q = NULL;
	create(n, Q);
	out(Q);
	return 0;
}
