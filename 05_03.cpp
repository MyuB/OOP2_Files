#include <iostream>
using namespace std;
//reference: ����
//����� ���ÿ� �ʱ�ȭ
//���۷��� ������ �Ϲ� ���������� �����ؾ��Ѵ�. ������� �Ұ�
//const Ű���带 ����ؼ� ���������� ��� ���� ����


void Test(int& rra, int* ppa) {
	//rra = 19;
	int b;
	*ppa = 11; //����� �ٸ� �޸� �ּ� ���� �� �ִ�;
	//ppa = &b;
	
}

int main() {

	int d = 8;
	Test(d, &d);
	cout << d << '\n';

	int a = 9;
	int& ra = a;
	ra = 10;
	cout << ra << '\n';

	int b = 1;
	//int& rb = 999;
	const int& rb = 999;
	cout << rb << '\n';

	int c = 3;
	int& rc = c;
	int* pc = &c;
	cout << c << " " << rc << " " << *pc << '\n';
	cout << &c << " " << &rc << " " << pc << '\n';

	return 0;
}