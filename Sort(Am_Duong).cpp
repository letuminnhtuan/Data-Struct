#include <iostream>
using namespace std;
void sort(int a[], int n);
void Swap(int *a, int *b);
int main(){
    int n;
    cin >> n;
    int a[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, n);
    return 0;
}
void sort(int a[], int n){
    int i, j;
    for(i = 0; i < n; i++){
        if(a[i] < 0) for(j = i+1; j < n; j++) if(a[i] < a[j] && a[j] < 0) Swap(&a[i], &a[j]);
        if(a[i] > 0) for(j = i+1; j < n; j++) if(a[i] > a[j] && a[j] > 0) Swap(&a[i], &a[j]);
    }
    for(i = 0; i < n; i++) cout << a[i] << " ";
}
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
