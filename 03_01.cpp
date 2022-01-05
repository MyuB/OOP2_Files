#include <iostream>
#include <typeinfo>
using namespace std;

//int main() {
//
//	int matrix[3][4] = { 
//		{1, 2, 3, 4},
//		{5, 6, 7, 8},
//		{9, 10, 11, 12}
//	};
//
//	int* pm = matrix[0];
//	cout << *(pm+1);
//
//	pm = &matrix[0][0];
//	for (int i = 0; i < 12; i++) {
//		if (i % 3 == 0) cout << '\n';
//		cout << *(pm + i) << " ";
//	}
//	cout << '\n';
//	for (int i = 0; i < 12; i++) {
//		if (i % 3 == 0) cout << '\n';
//		cout << pm[i] << " ";
//	}
//	cout << '\n';
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++)
//			cout << matrix[i][j] << " ";
//		cout << "\n";
//	}
//	
//	return 0;
//}


//int main() {
//
//	int a = 10;
//	const int* pa = &a;
//
//	cout << a << " " << *pa << '\n';
//
//	return 0;
//}

//int main() {
//
//	//review
//	
//	int a = 0x10; // 16진수
//	a = 010; // 8진수 
//	int b = 0b100; //2진수, binary literal
//
//	cout << a + b << '\n';
//
//	a = 10;
//	b;
//
//	cin >> hex >> b; //16진수로 받기
//	cout << a + b << '\n';
//
//	//manipulator
//	cout << hex; // 모든 변수 16진수 처리
//	cout << oct; // 모든 정수  8진수 처리
//	cout << a << '\n';
//
//	cout << "객체2\n"; // string literal
//	cout << 'A' << '\n'; //character literal
//	cout << 99 << '\n'; //integer literal
//	cout << true << '\n'; //boolean literal
//
//	return 0;
//}