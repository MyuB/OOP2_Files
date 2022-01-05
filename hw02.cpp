#include <iostream>
using namespace std;

int main() {

	int n;
	cout << "팩토리얼 숫자 개수(1~10) : ";
	cin >> n;

	int* arr = new int[n];

	for (auto i = 0; i < n; i++) {
		cin >> arr[i];
	}

	auto fact = [](int num) {
		int cumprod = 1;
		for (int i = 1; i <= num; i++) 
			cumprod *= i;
		return cumprod;
	};

	for (auto i = 0; i < n; i++) {
		cout << fact(arr[i]) << '\n';
	}

	delete []arr;

	return 0;
}