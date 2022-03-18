#include <iostream>
using namespace std;
void Swap(int *a, int *b){
    int d = *a;
    *a = *b;
    *b = d;
}
void sort(int a[], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = n-1; j > i; j--) if(a[i] > a[j]) Swap(&a[i], &a[j]);
    }
}
void out(int a[], int n){
    int b[n+1], count = 0;
    b[0] = a[0];
    for(int i = 1; i < n; i++){
    	if(a[i] != b[count]){
    		count += 1;
    		b[count] = a[i];
		}
	}
	// Dem tan so
	int t[count+1];
	for(int i = 0; i <= count; i++){
		t[i] = 0;
		for(int j = 0; j < n; j++){
			if(a[j] == b[i]) t[i] += 1;
		}
	}
	// Xuat tan so
	for(int i = 0; i <= count; i++) cout << b[i] << " " << t[i] << "; ";
}
int main(){
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, n);
    out(a, n); 
    return 0;
}
