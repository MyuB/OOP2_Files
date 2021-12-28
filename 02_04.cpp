#include <iostream>
#define endl "\n"
using namespace std;

int main() {

	//포인터 배열
	short a, b, c=5, d=2;
	short* sarr[4];
	sarr[0] = &a;
	sarr[1] = &b;
	sarr[2] = &c;
	sarr[3] = &d;

	cout << sarr[0] << endl;
	cout << sarr[1] << endl;
	cout << sarr[2] << endl;
	cout << sarr[3] << endl;	
	cout << &sarr[0] << endl;
	cout << &sarr[1] << endl;
	cout << &sarr[2] << endl;
	cout << &sarr[3] << endl;
	cout << *sarr[0] << endl;
	cout << *sarr[1] << endl;
	cout << *sarr[2] << endl;
	cout << *sarr[3] << endl;


	// 배열 포인터
	long larr[10];
	long(*p)[10] = &larr;

	(*p)[5] = 100;
	//*p[5] = 100; -> 이건 아니다
	cout << larr[5] << endl;
	cout << (*p)[5] << endl;

	int arr[5];
	int* p1 = &arr[1];
	int* p2 = &arr[4];

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p2 - p1 << endl; //인덱스 개수의 차


	//int arr[5];
	//int* parr = &arr[2];
	//cout << parr << endl;
	//cout << parr + 1 << endl;
	//cout << parr + 2 << endl;
	//cout << parr -1 << endl;
	//cout << parr -2 << endl;
	
	

	return 0;
}