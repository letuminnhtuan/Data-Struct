#include <iostream>
#include <math.h>
using namespace std;
void sort(int a[], int n);
bool check(int n);
int main(){
    int n, k, i, j;
    cin >> n;
    int a[n+1], b[n+1], count = 0;
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(check(a[i])){
    		b[count] = a[i];
    		count += 1;
		}
    }
    sort(b, count);
    return 0;
}
void sort(int a[], int n){
    int i, j;
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++) if(a[i] > a[j]){
        	int d = a[i];
        	a[i] = a[j];
        	a[j] = d;
		}
    }
	if(n == 0) cout << "NULL";
	else for(i = 0; i < n; i++) if(a[i] != a[i+1]) cout << a[i] << " ";
}
bool check(int n){
	int i = int(sqrt(n));
	if(i*i == n) return true;
	else return false;
}
