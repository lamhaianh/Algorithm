/**
*  Sinh cac day nhi phan do dai N
*  Thuat toan:
*		Xet tu cuoi day ve dau day tim gap so 0 dau tien thay so 0
*		 bang so 1 roi cho tat ca cac so sau so 0 do = 0
*/

#include <iostream>
#include <string.h>
using namespace std;

int N; // N <= 100
int M[101];

int main() {
	cin >> N;
	memset(M, 0, sizeof(M));
	while(true) {
		int k = N - 1;
		
		for (int i = 0; i < N; i++) {
			cout << M[i] << " ";	
		}
		cout << endl;
		
		while (M[k] == 1) k--;
		
		if (k < 0) {
			break;	
		} else {
			M[k] = 1;
			for (int i = k + 1; i < N; i++) {
				M[i] = 0;
			}
		}
	}
	return 0;
}
