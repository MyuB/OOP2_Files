#include <iostream>
using namespace std;

/*
static_cast: �������� ��ȯ ������ Ÿ�Ը� ��ȯ, �� ���� ��ȯ�� ������ ó��.
reinterpret_cast: �����ͳ���, �����Ϳ� ��ġ�� ���� ��ȭ
*/
class Complex {
	friend Complex operator+(const Complex& left, const Complex& right);
private:
	int real;
	int imaginary;
public:
	Complex(int r, int i) : real(r), imaginary(i) {}
	operator int() {
		return this->real;
	}
	int Real() const {
		return this->real;
	}
	int Imaginary() const {
		return this->imaginary;
	}
};
//friend ����ؼ� private ���� ���� �����ϴ�
Complex operator+(const Complex& left, const Complex& right) {
	int real = left.real + right.real;
	int imag = right.imaginary + right.imaginary;
	return Complex(real, imag);
}
ostream& operator << (ostream& o, const Complex& right) {
	o << right.Real() << showpos << right.Imaginary() << "i" << noshowpos;
	return o;
}

int main() {

	Complex c1(1, 1);
	Complex c2(7, 2);
	Complex c3(0, 0);
	int i;
	i = c2;
	//i = c2.operator int();
	cout << i << endl;

	return 0;
}



/*
dynamic_cast: ��� ������ Ŭ���� ������ �� ���۷��� Ÿ�� üũ
*/
//class A {
//public:
//	virtual void func() {}
//};
//class B : public A {};
//class C : public B {};
//
//int main() {
//	A* pa1 = new C;
//	A* pa2 = new A;
//	C* pc1 = dynamic_cast<C*>(pa1);
//	C* pc2 = dynamic_cast<C*>(pa2); //casting�� ����, null return
//	try
//	{
//		C& rc1 = dynamic_cast<C&>(*pa2); //casting ����
//	}
//	catch (bad_cast & e)
//	{
//		cout << "bad_cast occured" << endl;
//	}
//}

/*
const_cast: const, volatile ���� �Ӽ��� ����
volatile? => �����Ϸ��� ���� ���Ƿ� const ���� �ϴ°� �װ� �����ش�
*/
//int main() {
//	char univ[] = "Inha";
//	const char* c1 = univ;
//	char* c2;
//	//c2 = c1; �̰� �翬�� �ȵȴ� char* �� const char* �Ҵ� �Ұ�
//	c2 = const_cast<char*>(c1);
//	//const �� ������ �� �ִ� ��. Ÿ�Ա��� �ٲٴ°� �ƴϴ�
//	c2[0] = 'i';
//	cout << c1 << endl;
//	cout << c2 << endl;
//}