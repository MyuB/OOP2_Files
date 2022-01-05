#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int imaginary;
public:
	Complex(int r, int i) : real(r), imaginary(i) {}
	Complex operator+(const Complex& right) {
		int real = this->real + right.real;
		int imag = this->imaginary + right.imaginary;
		return Complex(real, imag);
	}
	//전치 연산;
	Complex operator++() {
		this->real++;
		return *this;
	}
	//후위 연산
	Complex operator++(int) {
		Complex prev(this->real, this->imaginary);
		this->real++;
		return prev;
	}
	int Real() const {
		return this->real;
	}
	int Imaginary() const {
		return this->imaginary;
	}
};

int main() {

	Complex c1(1, 1);
	Complex prefix(0, 0);
	Complex postfix(0, 0);

	prefix = ++c1; // prefix = c1 = (2, 1)
	postfix = c1++; // postifx (2, 1), c1 = (3, 1)

	cout << prefix.Real() << endl;
	cout << postfix.Real() << endl;
	cout << c1.Real() << endl;



	//Complex c1(1, 1);
	//Complex c2(7, 2);
	//Complex c3(0, 0);

	//c3 = c1 + c2;
	//cout << c3.Real() << ", " << c3.Imaginary() << endl;

	return 0;
}