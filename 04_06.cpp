#include <iostream>
using namespace std;

//int main() {
//	short* p = new short[100];
//	cout << p << endl;
//	delete[] p;
//	p = NULL;
//	cout << p << endl;
//	delete[] p;
//	p = NULL;
//
//	return 0;
//}


//int main() {
//	int* p = new int;
//	*p = 486;
//	cout << *p << endl;
//	
//	delete p;
//	// delete 안하게 되면 메모리 누수가 발생하게 된다
//	//해제하고 또 해제하면 안된다
//
//	return 0;
//}


//int main() {
//
//	int* p;
//	int length, total = 0;
//	double average;
//	cin >> length;
//	p = new int[length]; //동적 메모리 할당
//	
//	for (auto i = 0; i < length; i++) {
//		cin >> p[i];
//		//cin >> *(p + i);
//	}
//
//	for (auto i = 0; i < length; i++) {
//		total += p[i];
//	}
//
//	average = total / (double)length;
//	cout << total << '\n';
//	cout << average << '\n';
//
//	delete[] p; //사용한 메모리 해제
//
//	return 0;
//}