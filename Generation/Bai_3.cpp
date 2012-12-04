/**
*  N = 3
*  1 2 3
*  1 3 2
*  2 1 3
*  2 3 1
*  3 1 2
*  3 2 1
*/

#include <iostream>

using namespace std;

int N;
int M[101];

#define SWAP(a, b) { int t = M[a]; M[a] = M[b]; M[b] = t; }

int main() {
	cin >> N;
	// Khoi tao cau hinh ban dau
	for (int i = 0; i <= N; i++) {
		M[i] = i;
	}
	
	while(true) {
		// Output
		for (int i = 1; i <= N; i++) {
			cout << M[i] << " ";
		}
		cout << endl;
		
		int k = N - 1;
		while(k > 0 && M[k] > M[k + 1]) k--;
		
		if (k > 0) {
			int p = N;
			while(M[p] < M[k]) p--;
			
			SWAP(p, k);
			int a = k + 1;
			int b = N;
			
			while(a < b) {
				SWAP(a, b);
				a++; b--;
			}
		} else {
			break;
		}
	}
}
