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
int out(int a[], int n){
    for(int i = 0; i < n; i++){
    		
    }
}
int main(){
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, n);
    cout << out(a, n);
    return 0;
}
