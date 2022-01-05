#include <iostream>
using namespace std;

class Complex {
	friend Complex operator+(const Complex& left, const Complex& right);
private:
	int real;
	int imaginary;
public:
	Complex(int r, int i) : real(r), imaginary(i) {}
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
//friend 사용해서 private 값에 접근 가능하다
Complex operator+(const Complex& left, const Complex& right) {
	int real = left.real + right.real;
	int imag = right.imaginary + right.imaginary;
	return Complex(real, imag);
}

int main() {

	Complex c1(1, 1);
	Complex c2(7, 2);
	Complex c3(0, 0);

	c3 = c1 + c2;
	//c3 = operator+(c1, c2); //이렇게 사용 가능
	cout << c3.Real() << ", " << c3.Imaginary() << endl;

	return 0;
}