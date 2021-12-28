#include <iostream>
using namespace std;
//oop1 review
int main() {

	int i = 5; // 32bit
	// i = 7;
	cout << i << endl;
	short s = 20; // 16bit
	cout << s << endl;
	//singed vs unsigned

	//array
	//배열명은 포인터 상수이다
	int arr[4] = { 0 };
	int* ptr = &arr[0];
	arr[0] = -9; 
	arr[3] = 30000;

	for (int i = 0; i < 4; i++) {
		//cout << *(ptr + i) << '\n';
		//cout << ptr[i] << '\n';
		//cout << *(arr + i) << '\n';
		cout << arr[i] << '\n';
	}


	return 0;
}