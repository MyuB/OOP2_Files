#include <iostream>
using namespace std;

class Complex {
	friend Complex operator+(const Complex& left, const Complex& right);
	friend istream& operator>>(istream& o, Complex& right);
private:
	int real;
	int imaginary;
public:
	Complex(int r, int i) : real(r), imaginary(i) {}
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
istream& operator >> (istream& o, Complex& right) {
	cout << "�Ǽ���: "; o >> right.real;
	cout << "�����: "; o >> right.imaginary;
	return o;
}

int main() {

	Complex c1(0, 0);

	cin >> c1;
	cout << c1 << endl;

	return 0;
}