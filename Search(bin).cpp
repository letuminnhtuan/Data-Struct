#include <iostream>
using namespace std;
int search(int f[], int n, int k){
	int a = 0, b = n-1, c;
	if(f[a] == k) return a;
	if(f[b] == k) return b;
	do{
		c = (a+b) / 2;
		if(f[c] == k) return c;
		else if(f[c] < k) a = c;
		else b = c;
	} while((b-a) != 1);
	return -1;
}
int main(){
	int n, a[1000], k;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	cin >> k;
	cout << search(a, n, k);
	return 0;
} 
