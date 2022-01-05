#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int maxPower = 10;
	int n;
	cin >> n;

	int** pascal = new int* [n + 1];
	for (int i = 0; i < n + 1; i++) {
		pascal[i] = new int[i];
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (j == 0 || i == j) {
				pascal[i][j] = 1;
			}
			else {
				pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
			}
		}
	}

	cout << "(x + y)^" << n << "의 이항계수: ";
	for (int j = 0; j <= n; j++) {
		cout << setw(5) << pascal[n][j];
	}
	cout << endl;

	delete[] pascal;
	pascal = NULL;

	return 0;

}

