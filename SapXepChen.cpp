#include <iostream>
using namespace std;
void xep_chen(int n, float A[]);
int main(){
	int n;
	float A[50];
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap mang A: ";
	for(int i = 1; i <= n; i++) cin >> A[i];
	xep_chen(n, A);
	return 0;
}
void xep_chen(int n, float A[]){
	int i, j, vt = 0;
	float A1[50], x;
	for(i = 1; i <= n; i++) A1[i] = A[i];
	for(i = 2; i <= n; i++){
		x = A1[i];
		for(j = i - 1; j >= 1; j--){
			if(x < A1[j]){
				A1[j + 1] = A1[j];
				vt = j;
			}
		}
		A1[vt] = x;
	}
	cout << "Mang sau khi xep la: ";
	for(i = 1; i <= n; i++) cout << A1[i] << " ";
}
