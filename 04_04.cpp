#include <iostream>
using namespace std;

int main() {

	//Lambda Expression (C++ 11, 14)
	// [ĸó��](�Ű���������Ʈ)->����Ÿ��{�Լ� �ٵ�};
	//�Ű����� ����Ʈ, ȭ��ǥ, ����Ÿ�� ���� ����!
	[]()->void {};
	[]() {};
	[] {};

	//�� �ڵ�� ������ �ȵ�
	[] {cout << "Hi Lambda!" << '\n'; };
	//�� ���� �Ұ�ȣ ���� ���� ǥ������ ��� �����Ű�� ����
	[] {cout << "Hi Lambda!" << '\n'; }();
	//������ �Ҵ��� �ϰ� ȣ�� �� ������ ����
	auto inha = []() {cout << "Hi Lambda!" << endl; };
	inha();

	/*
	auto inha = []() {return 5 + 10; };
	cout << inha() << '\n';
	*/
	// ȭ��ǥ�� �����Ϸ��� return type������ ������ �ؾ��Ѵ�
	//auto add = [](int a, int b)-> int{return a + b; };
	auto add = [](int a, int b){return a + b; };
	cout << add(5, 10) << '\n';
	//�̷��Ե� ��� ����
	auto add1 = [](int a, int b) {return a + b; }(5, 10);
	cout << add1 << '\n';

	//������ �̰� ĳ���� �Ǹ� 9.7 �� �����°� ����������, return type�� �����������μ� int�� casting ���ѹ���
	auto temp = [](float a, int b) -> int {return a + b; };
	cout << temp(7.7f, 2) << '\n';


	auto temp_f = [](float a, int b) -> float {return a + b; };
	cout << temp_f(7.7f, 2) << '\n';

	//�̷��� �Ǹ� �츮�� �˰��ִ� float�� return �ȴ� (auto)
	auto temp_a = [](float a, int b) {return a + b; };
	cout << temp_a(7.7f, 2) << '\n';

	//ĸó ���� �Լ� �ٱ� ���� �μ����� ���� �����ϰ� ������ش�
	short c = 5, d = 7;
	auto block = [c, d](float a, int b)->int {
		return a + b + c + d;
	};
	cout << block(1.9f, 2) << '\n';

	return 0;

}