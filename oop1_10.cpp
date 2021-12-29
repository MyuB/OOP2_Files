#include <iostream>
#include <cmath>
using namespace std;

int gcd_while(int a, int b) {
	int tmp, n;

	//a에 큰 값을 위치시키기 위한 조건문입니다.
	if (a < b) {
		tmp = a;
		a = b;
		b = tmp;
	}

	//유클리드 알고리즘 부분입니다.
	//b가 0이 될때까지(a%b), 반복문을 돌게되고, b가 0인 순간의 a를 GCD로 판단하고 리턴합니다.
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
	//n => 분자, d => 분모
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