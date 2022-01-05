#include <iostream>
#include <functional>
using namespace std;
#define endl '\n'

/*
���� ����

1. �͸��Լ�, �Լ���ü�� ����
2. �Լ� �����Ϳ� �Լ���ü�� ������ ���Ѵ�
3. ĸ�� ����� ���� �Լ� ���� ������ ������ �� �ְ�, & ��ȣ�� ���� �����Լ� �ȿ����� �ܺ� ������ ���� ������ �� �ִ�.
4. ��� ȣ�⵵ �����ϴ�.

*/

int main() {
	
	//���ٿ��� ��͸� ���� �� �� auto Ÿ�����δ� �߷� �Ұ�
	//�ݵ�� �����Ϸ��� �ϴ� �Լ��� Ÿ���� ��õǾ����
	//�ܺο��� ���� �ʿ���� lambda ����Լ� �����

	//auto�� �ᱹ type�� ���� �߷��� �ؾ��ϴµ� �Ϲ������� ���ԵǸ� ��Ȯ�� �� return �ϴ��� �𸣱� ������ ��������Լ��� funtional�� function<type(type)>�� ����Ѵ�
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
		//c = -11; �̷��� ������ ������ �����μ� �������Ǵ°��� xxx
		c = -5;
		return a + b + c + d;
	};
	cout << block(1.9f, 2) << '\n';
	//���ʿ��� �ּҷ� �����ؼ� �ٲ����� c�� �ٲ����
	//cout << c << '\n';

	//�̷��� ���� ���� ������ ���� ��� ������ ������ �� �ְ�, �� ������� �����ϴ�(������ ĸó)
	auto block2 = [&](float a, int b)->int {
		c = -5;
		d = 8;
		return a + b + c + d;
	};
	cout << block2(1.9f, 2) << '\n';
	//��� ���� ��ȣ�� ������ Ÿ���� lambda class�� ����
	cout << typeid(block2).name() << '\n';
	

	//�̷��� ���� ���� ��ȭ�� ����Ű���� ������ �����ϴ�(������ ĸó)
	auto block3 = [=](float a, int b)->int {
		return a + b + c + d;
	}(1.9f, 2);
	//�̷��� ��� ��������ִ� args ���� ������ Ÿ���� ������
	cout << typeid(block3).name() << '\n';

	//��Ȯ�� ��� auto �Ⱦ��� �ٷ� type �ۼ� ����
	int power = [](int base, int exp)->int {
		int r = 1;
		for (auto i = 1; i <= exp; i++) {
			r *= base;
		}
		return r;
	}(2, 8);
	
	cout << power << '\n';

	/* �̷��� �ۼ��� �ϸ� ������ ����
	* �̴� ���� �Լ��� �ּҰ��� ���� �� �־���ϴµ� int�� �װ� ���� �� ����
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