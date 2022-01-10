#include <iostream>
using namespace std;

/*
	stream? 흐름

	ios_base // 조부모
	basic_ios // 부모
	basic_ostream // cout 객체의 타입
	basic_istream // cin 객체의 타입
*/
int main() {

	float f = 0.01234f;
	ios_base::fmtflags old; //입출력 포맷과 관련된 기능을 제공하는 클래스
	cout << f << endl;
	old = cout.setf(ios_base::scientific, ios_base::floatfield);
	//old = cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << f << endl;
	cout.setf(old, ios_base::floatfield);
	cout << f << endl;

	int a = 10;
	cout.setf(ios_base::hex, ios_base::basefield);
	//cout << hex;
	cout << a << endl;

	bool flag = true;
	//cout << boolalpha;
	cout << flag << endl;
	cout.setf(ios_base::boolalpha);
	cout << flag << endl;
	//cout << noboolalpha;
	cout.unsetf(ios_base::boolalpha);
	cout << flag << endl;

	// width(), precision() 등등 -> 출력형식 지정함수

	int b = 11;
	cout.width(5);
	cout << b << endl;

	double d = 0.01234;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(3);
	cout << d << endl;

	return 0;
}