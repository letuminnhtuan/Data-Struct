#include <iostream>
using namespace std;
void xep_noi_bot(int n, float A[]);
int main(){
	int n;
	float A[50];
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang A: ";
	for(int i = 1; i <= n; i++) cin >> A[i];
	xep_noi_bot(n, A);
	return 0;
}
void xep_noi_bot(int n, float A[]){
	int i, j;
	float A1[50], tam;
	for(i = 1; i <= n; i++) A1[i] = A[i];
	for(i = 1; i < n; i++){
		for(j = n; j >= i; j--){
			if(A1[j - 1] > A1[j]){
				tam = A1[j];
				A1[j] = A1[j - 1];
				A1[j - 1] = tam;
			}
		}
	}
	cout << "Mang sau khi xep la: ";
	for(i = 1; i <= n; i++) cout << A1[i] << " ";
}
