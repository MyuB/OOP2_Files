#include <iostream>
using namespace std;

/*
static_cast: 논리적으로 벼환 가능한 타입만 변환, 그 외의 변환은 에러로 처리.
reinterpret_cast: 포인터끼리, 포인터와 수치형 간의 변화
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
//friend 사용해서 private 값에 접근 가능하다
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
dynamic_cast: 상속 관계의 클래스 포인터 및 레퍼런스 타입 체크
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
//	C* pc2 = dynamic_cast<C*>(pa2); //casting이 실패, null return
//	try
//	{
//		C& rc1 = dynamic_cast<C&>(*pa2); //casting 실패
//	}
//	catch (bad_cast & e)
//	{
//		cout << "bad_cast occured" << endl;
//	}
//}

/*
const_cast: const, volatile 등의 속성을 변경
volatile? => 컴파일러가 가끔 임의로 const 지정 하는게 그걸 막아준다
*/
//int main() {
//	char univ[] = "Inha";
//	const char* c1 = univ;
//	char* c2;
//	//c2 = c1; 이건 당연히 안된다 char* 에 const char* 할당 불가
//	c2 = const_cast<char*>(c1);
//	//const 만 제거할 수 있는 것. 타입까지 바꾸는건 아니다
//	c2[0] = 'i';
//	cout << c1 << endl;
//	cout << c2 << endl;
//}