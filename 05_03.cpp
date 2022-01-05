#include <iostream>
using namespace std;
//reference: 별명
//선언과 동시에 초기화
//레퍼런스 병수는 일반 변수명으로 대입해야한다. 상수대입 불가
//const 키워드를 사용해서 예외적으로 상수 대입 가능


void Test(int& rra, int* ppa) {
	//rra = 19;
	int b;
	*ppa = 11; //여기는 다른 메모리 주소 넣을 수 있다;
	//ppa = &b;
	
}

int main() {

	int d = 8;
	Test(d, &d);
	cout << d << '\n';

	int a = 9;
	int& ra = a;
	ra = 10;
	cout << ra << '\n';

	int b = 1;
	//int& rb = 999;
	const int& rb = 999;
	cout << rb << '\n';

	int c = 3;
	int& rc = c;
	int* pc = &c;
	cout << c << " " << rc << " " << *pc << '\n';
	cout << &c << " " << &rc << " " << pc << '\n';

	return 0;
}