#include <iostream>
using namespace std;
void add(int i, int n, int A[]), Heap(int A[], int n);
int main(){
	int n, A[100];
	cin >> n;
	for(int i = 0; i < n; i++) cin >> A[i];
	Heap(A, n);
	for(int i = 0; i < n; i++) cout << A[i] << " ";
	return 0;
}
void add(int i, int n, int A[]){
	int large = i, l = 2*i + 1, r = 2*i + 2;
	if(l < n && A[l] > A[large]) large = l;
	if(r < n && A[r] > A[large]) large = r;
	if(large != i){
		int t = A[i];
		A[i] = A[large];
		A[large] = t;
		add(large, n, A);
	}
}
void Heap(int A[], int n){
	for(int i = n/2 - 1; i >= 0; i--) add(i, n, A);
	for(int i = n-1; i > 0; i--){
		int t = A[i];
		A[i] = A[0];
		A[0] = t;
		add(0, i, A);
	}
}
