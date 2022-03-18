#include <iostream>
using namespace std;
void Radix(int *A, int n);
int main(){
	int n;
	cin >> n;
	int *A = new int[n];
	for(int i = 0; i < n; i++) cin >> *(A+i);
	Radix(A, n);
	for(int i = 0; i < n; i++) cout << *(A+i) << " ";
	delete[] A;
	return 0;
}
void Radix(int *A, int n){
	int i, B[10], m = *(A+0), e = 1;
	for (i = 0; i < n; i++) if (*(A+i) > m) m = *(A+i);
	while (m/e > 0){
		int bucket[10] ={0};
		for(i = 0; i < n; i++) bucket[*(A+i)/e % 10]++;
		for(i = 1; i < 10; i++) bucket[i] += bucket[i-1];
		for(i = n - 1; i >= 0; i--) B[--bucket[*(A+i)/e % 10]] = *(A+i);
		for(i = 0; i < n; i++) *(A+i) = *(B+i);
		e *= 10;
	}
}
