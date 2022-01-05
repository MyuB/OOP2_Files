#include <iostream>
using namespace std;

int arr[1000];

int fibonacci3(int n) {
	int a = 0, b = 1, c, i;
	if (n == 0)
		return a;
	for (i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}


void fibonacci2(int n) {

	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[n-1] << '\n';
}

int fibonacci1(int n) { 
	if (n <= 1) return n; 

	return fibonacci1(n - 1) + fibonacci1(n - 2);
}

int main() {

	cout << fibonacci1(10) << '\n';
	fibonacci2(10);
	cout << fibonacci3(10) << '\n';


	return 0;
}