/**
*  Liet ke cac tap con K phan tu
*	Thuat toan:
*		Tim tu cuoi day len dau day, khi gap mot phan tu X[i] != n - k + i
*		Tang X[i] len 1
*		Dat cac phan tu sau X[i] = gioi han duoi cua no ( X[i+1] = X[i] + 1);
*/

#include <iostream>
#include <string.h>

using namespace std;

int N, K;
int M[101];
int main() {
	cin >> N >> K;
	for (int i = 0; i < K; i++) {
		M[i] = i + 1;
	}
	
	while(true) {
		int k = K - 1;
		for (int i = 0; i < K; i++) {
			cout << M[i] << " ";
		}
		cout << endl;
		
		while(k >= 0 && M[k] == N - K + k + 1) k--;
		
		if (k < 0) {
			break;
		} else {
			M[k] += 1;
			for (int i = k+1; i < K; i++) {
				M[i] = M[i-1] + 1;
			}
		}
	}
	
}
