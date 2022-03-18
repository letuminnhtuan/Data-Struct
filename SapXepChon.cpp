#include <iostream>
using namespace std;
void xep_chon(int n, float A1[]);
int main(){
	int n, i, j;
	float A[50];
	cout << "Nhap n: "; 
	cin >> n;
	cout << "Nhap mang A: ";
	for(i = 1; i <= n; i++) cin >> A[i];
	xep_chon(n, A);
	return 0;
}
void xep_chon(int n, float A1[]){
	int i, j;
	float A[50];
	for(i = 1; i <= n; i++) A[i] = A1[i];
	for(i = 1; i < n; i++){
		for(j = i + 1; j <= n; j++){
			if(A[i] > A[j]){
				float tam = A[i];
				A[i] = A[j];
				A[j] = tam;
			}
		}
	}
	cout << "Mang sau khi xep la: ";
	for(i = 1; i <= n; i++) cout << A1[i] << " ";
}
