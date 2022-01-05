#include <iostream>
using namespace std;

//�̷��� ����ϴ� ���� ������ ������Ÿ���� �ּ��� �ۼ����� �� �ִ�
void Hello(int); //prototype �ۼ�
int Factorial(int); //���丮�� �Լ�, �ݺ���
int FactorialRecursion(int);

int main() {
	//�Լ� �����͸� ����Ϸ��� Ÿ���� �¾ƾ��Ѵ�
	int(*pFact)(int);
	void(*pHi)(int);
	pFact = &Factorial;
	pHi = &Hello;
	
	int temp;
	cin >> temp;


	Hello(temp); //�Լ�ȣ��
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