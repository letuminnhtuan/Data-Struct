#include <stdio.h>
#include <malloc.h>
typedef struct tr{
	char ten[20];
	int canbo, sinhvien;
	struct tr *next;
} truong;
void create(int n), display(int n), max(int n), ins(int *n);
truong cre();
// Khoi tao danh sach
truong *L = NULL;
int main(){
	int n;
	printf("Nhap so truong can them: "); scanf("%d", &n);
	printf("\n1. Cau a:\n");
	create(n);
	display(n);
	printf("\n2. Cau b:\n");
	printf("Cac truong co so sinh vien cao nhat:\n");
	max(n);
	printf("\n3. Cau c:\n");
	ins(&n);
	display(n);
	return 0;
}
truong cre(){
	truong *p = (truong *) malloc(sizeof(truong));
	fflush(stdin);
	printf("Nhap ten truong: "); gets(p->ten);
	printf("Nhap so can bo: "); scanf("%d", &p->canbo);
	printf("Nhap so sinh vien: "); scanf("%d", &p->sinhvien);
	return *p;
}
void create(int n){
	int i;
	for(i = 1; i <= n; i++){
		printf("---------------------------\n");
		truong *p = (truong *) malloc(sizeof(truong));
		*p = cre();
		p->next = L;
		L = p;
	}
}
void display(int n){
	truong *p = (truong *) malloc(sizeof(truong));
	p = L;
	printf("%20s %15s %15s\n", "Ten Truong", "So Can Bo", "So sinh vien");
	while(p != NULL){
		printf("%20s %15d %15d\n", p->ten, p->canbo, p->sinhvien);
		p = p->next;
	}
}
void max(int n){
	truong *p = (truong *) malloc(sizeof(truong));
	truong *p1 = (truong *) malloc(sizeof(truong));
	p1 = L;
	int max = p1->sinhvien;
	while(p1 != NULL){
		if(max < p1->sinhvien) max = p1->sinhvien;
		p1 = p1->next;
	}
	p = L;
	while(p != NULL){
		if(p->sinhvien == max) printf("%20s %15d %15d\n", p->ten, p->canbo, p->sinhvien);
		p = p->next;
	}
}
void ins(int *n){
	truong *p = (truong *) malloc(sizeof(truong));
	printf("Nhap thong tin truong can them:\n");
	*p = cre();
	p->next = L;
	L = p;
	(*n) = (*n) + 1;	
}
