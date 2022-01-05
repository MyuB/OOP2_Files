#include <iostream>
using namespace std;

//이렇게 사용하는 것이 좋은게 프로토타입의 주석을 작성해줄 수 있다
void Hello(int); //prototype 작성
int Factorial(int); //팩토리얼 함수, 반복문
int FactorialRecursion(int);

int main() {
	//함수 포인터를 사용하려면 타입이 맞아야한다
	int(*pFact)(int);
	void(*pHi)(int);
	pFact = &Factorial;
	pHi = &Hello;
	
	int temp;
	cin >> temp;


	Hello(temp); //함수호출
	cout << Factorial(temp) << '\n';
	cout << FactorialRecursion(temp) << '\n';

	cout << (*pFact)(temp) << '\n';
	(*pHi)(temp);

	return 0;
}

void Hello(int n) {
	cout << "Hi~ " << n  << endl;
}

int FactorialRecursion(int n) {
	if (n <= 1)
		return 1;
	else
		return n * FactorialRecursion(n-1);
}

int Factorial(int n) {
	int result = 1;

	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}