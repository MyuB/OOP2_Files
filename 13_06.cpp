#include <iostream>
using namespace std;

/*
	stream? �帧

	ios_base // ���θ�
	basic_ios // �θ�
	basic_ostream // cout ��ü�� Ÿ��
	basic_istream // cin ��ü�� Ÿ��
*/
int main() {

	float f = 0.01234f;
	ios_base::fmtflags old; //����� ���˰� ���õ� ����� �����ϴ� Ŭ����
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

	// width(), precision() ��� -> ������� �����Լ�

	int b = 11;
	cout.width(5);
	cout << b << endl;

	double d = 0.01234;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(3);
	cout << d << endl;

	return 0;
}