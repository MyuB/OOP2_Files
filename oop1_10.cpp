#include <iostream>
#include <cmath>
using namespace std;

int gcd_while(int a, int b) {
	int tmp, n;

	//a�� ū ���� ��ġ��Ű�� ���� ���ǹ��Դϴ�.
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}

	//��Ŭ���� �˰��� �κ��Դϴ�.
	//b�� 0�� �ɶ�����(a%b), �ݺ����� ���Եǰ�, b�� 0�� ������ a�� GCD�� �Ǵ��ϰ� �����մϴ�.
	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}


int gcd_recursion(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd_recursion(b, a % b);
	}
}

int main() {
	int n1, d1, n2, d2;
	//n => ����, d => �и�
	cin >> n1;
	cin >> d1;
	cin >> n2;
	cin >> d2;

	cout << n1 << "/" << d1;
	cout << n2 << "/" << d2;
	cout << endl;

	int temp_denom = d1 * d2;
	int temp_num = n1 * d2 + n2 * d1;

	int temp = gcd_recursion(temp_denom, temp_num);
	cout << temp_num / temp << " / " << temp_denom / temp;
}