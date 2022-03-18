#include <stdio.h>
void BackTracking(int i, int n, int a[]);
void Output(int n, int a[]);
int check(int n, int a[]);
int b[100];
int main(){
	int n, a[100];
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) b[i] = i;
	BackTracking(1, n, a);
	return 0;
}
void BackTracking(int i, int n, int a[]){
	for(int j = 1; j <= n; j++){
		a[i] = j;
		if(i == n) Output(n, a);
		else BackTracking(i+1, n, a);
	}
}
void Output(int n, int a[]){
	for(int i = 1; i <= n; i++) if(check(n, a) == 1){
		printf("%d", b[a[i]]);
		if(i == n) printf(" ");
	}	
}
int check(int n, int a[]){
	for(int i = 1; i <= n; i++){
		for(int j = i+1; j <= n; j++) if(a[j] == a[i]) return 0;
	}
	return 1;
}
