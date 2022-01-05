#include <iostream>
using namespace std;

int main() {

	//Lambda Expression (C++ 11, 14)
	// [캡처블럭](매개변수리스트)->리턴타입{함수 바디};
	//매개별수 리스트, 화살표, 리턴타입 생략 가능!
	[]()->void {};
	[]() {};
	[] {};

	//이 코드는 실행이 안됨
	[] {cout << "Hi Lambda!" << '\n'; };
	//맨 끝에 소괄호 쌍은 람다 표현식을 즉시 실행시키는 역할
	[] {cout << "Hi Lambda!" << '\n'; }();
	//변수에 할당을 하고 호출 한 다음에 실행
	auto inha = []() {cout << "Hi Lambda!" << endl; };
	inha();

	/*
	auto inha = []() {return 5 + 10; };
	cout << inha() << '\n';
	*/
	// 화살표를 생략하려면 return type까지도 생략을 해야한다
	//auto add = [](int a, int b)-> int{return a + b; };
	auto add = [](int a, int b){return a + b; };
	cout << add(5, 10) << '\n';
	//이렇게도 사용 가능
	auto add1 = [](int a, int b) {return a + b; }(5, 10);
	cout << add1 << '\n';

	//원래는 이게 캐스팅 되면 9.7 이 나오는게 정상이지만, return type을 지정해줌으로서 int로 casting 시켜버림
	auto temp = [](float a, int b) -> int {return a + b; };
	cout << temp(7.7f, 2) << '\n';


	auto temp_f = [](float a, int b) -> float {return a + b; };
	cout << temp_f(7.7f, 2) << '\n';

	//이렇게 되면 우리가 알고있는 float가 return 된다 (auto)
	auto temp_a = [](float a, int b) {return a + b; };
	cout << temp_a(7.7f, 2) << '\n';

	//캡처 블럭은 함수 바깥 블럭의 인수들을 참조 가능하게 만들어준다
	short c = 5, d = 7;
	auto block = [c, d](float a, int b)->int {
		return a + b + c + d;
	};
	cout << block(1.9f, 2) << '\n';

	return 0;

}