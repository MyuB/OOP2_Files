#include <iostream>
#include <functional>
using namespace std;
#define endl '\n'

/*
람다 정리

1. 익명함수, 함수객체를 생성
2. 함수 포인터와 함수객체의 장점을 지닌다
3. 캡쳐 기능을 토해 함수 밖의 변수에 접근할 수 있고, & 기호를 통해 람다함수 안에서도 외부 변수의 값을 변경할 수 있다.
4. 재귀 호출도 가능하다.

*/

int main() {
	
	//람다에서 재귀를 구현 할 떄 auto 타입으로는 추론 불가
	//반드시 대입하려고 하는 함수의 타입이 명시되어야함
	//외부에서 정의 필요없이 lambda 재귀함수 만들기

	//auto는 결국 type에 대한 추론을 해야하는데 일반적으로 쓰게되면 정확히 뭘 return 하는지 모르기 때문에 람다재귀함수는 funtional의 function<type(type)>을 사용한다
	function<int(int)> fact = [&fact](int n)->int {
		return n <= 1 ? 1 : n * fact(n - 1);
		/*if (n <= 1)
			return 1;
		else
			return n * fact(n - 1);*/
	};
	cout << fact(6) << endl;

	short c = 5, d = 7;
	auto block = [&c, d](float a, int b)->int {
		//c = -11; 이렇게 참조된 변수는 값으로서 엑세스되는거임 xxx
		c = -5;
		return a + b + c + d;
	};
	cout << block(1.9f, 2) << '\n';
	//안쪽에서 주소로 참조해서 바꿨으니 c도 바뀐거임
	//cout << c << '\n';

	//이렇게 쓰면 상위 스코프 내의 모든 변수를 참조할 수 있고, 값 변경까지 가능하다(참조로 캡처)
	auto block2 = [&](float a, int b)->int {
		c = -5;
		d = 8;
		return a + b + c + d;
	};
	cout << block2(1.9f, 2) << '\n';
	//즉시 실행 괄호가 없으면 타입이 lambda class로 나옴
	cout << typeid(block2).name() << '\n';
	

	//이렇게 쓰면 값은 변화를 못시키지만 참조는 가능하다(값으로 캡처)
	auto block3 = [=](float a, int b)->int {
		return a + b + c + d;
	}(1.9f, 2);
	//이렇게 즉시 실행시켜주는 args 들이 있으면 타입이 결정됨
	cout << typeid(block3).name() << '\n';

	//명확한 경우 auto 안쓰고 바로 type 작성 가능
	int power = [](int base, int exp)->int {
		int r = 1;
		for (auto i = 1; i <= exp; i++) {
			r *= base;
		}
		return r;
	}(2, 8);
	
	cout << power << '\n';

	/* 이렇게 작성을 하면 에러가 난다
	* 이는 람다 함수가 주소값을 받을 수 있어야하는데 int로 그걸 받을 수 없다
	int power = [](int base, int exp) {
		int r = 1;
		for (auto i = 1; i <= exp; i++) {
			r *= base;
		}
		return r;
	};
	cout << power(2, 8) << endl	*/

	return 0;
}