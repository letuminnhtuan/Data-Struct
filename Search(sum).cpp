#include <iostream>
using namespace std;
void search(int a[], int n, int k){
	int s, i, j, d = 0, b[n+1], t = 0;
	for(i = 0; i < n; i++){
		s = 0;
		j = i;
		d = 0;
		while(j < n){
			s = s + a[j];
			b[d] = a[j];
			j += 1;
			d += 1;
			if(s >= k) break;
		}
		if(s == k) {
			t = 1;
			for(int m = 0; m < d; m++) cout << b[m] << " ";
			break;
		}
	}
	if(t == 0) cout << -1;
}
int main(){
	int n, k; 
	cin >> n;
	int a[n+1];
	for(int i = 0; i < n; i++) cin >> a[i];
	cin >> k;
	search(a, n, k);
	return 0;
}
