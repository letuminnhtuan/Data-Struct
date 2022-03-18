#include <iostream>
using namespace std;
void DeQuy(int i, int a[], int n, int k), out(int a[], int k);
int main(){
	int n, k, a[100];
	cin >> n >> k;
	a[0] = 0;
	DeQuy(1, a, n, k);
	return 0;
}
void DeQuy(int i, int a[], int n, int k){
	for(int j = a[i-1]+1; j <= n; j++){
		a[i] = j;
		if(i == k) out(a, k);
		else DeQuy(i+1, a, n, k);
	}
}
void out(int a[], int k){
	for(int i = 1; i <= k; i++) cout << a[i];
	cout << " ";
}
