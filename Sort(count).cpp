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
int out(int a[], int n, int k){
	int count = 0;
    for(int i = 1; i < n; i++) if(a[i] - a[i-1] > k) count += 1;
    return count + 1;
}
int main(){
    int n, k;
    cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, n);
    cin >> k;
    cout << out(a, n, k);
    return 0;
}
