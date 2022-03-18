#include <iostream>
using namespace std;
void Shell(int *A, int n);
int main(){
	int n;
	cin >> n;
	int *A = new int[n];
	for(int i = 0; i < n; i++) cin >> *(A+i);
	Shell(A, n);
	for(int i = 0; i < n; i++) cout << *(A+i) << " ";
	return 0;
}
void Shell(int *A, int n){
	int i, j, k;
	k = n/2;
	while(k > 0){
		for(i = k; i < n; i++){
			int x = *(A+i);
			j = i;
			while(j > k-1 && *(A+j-k) >= x){
				*(A+j) = *(A+j-k);
				j -= k; 
			}
			*(A+j) = x;
		}
		k = k / 2;
	}
}
