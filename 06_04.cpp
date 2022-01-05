#include <iostream>
#define endl '\n'
using namespace std;

/* ����ü vs Ŭ����
1. class Ű���� ���
2. public ���� ���� ����� ���õ� Ű���� ���
3. ��� �Լ�(�޼���)�� ������ �� ����
*/
//������: ��ü�� ������ �� �ڵ������� ȣ��Ǵ� �Լ�
//�Ҹ���: ��ü�� �Ҹ�� �� �ڵ������� ȣ��Ǵ� �Լ�
class Point {
public:
	int x, y;
	Point(); //�����ڴ� ����Ÿ�� ����, Ŭ������ �̸��� ����
	Point(int _x, int _y);
	void Print();

};
// 1.Ŭ���� ���� �ȿ��� �޼����� ������Ÿ�Ը� ���ܵд�
// 2.Ŭ���� ���� �ۿ����� �������� �����ڸ� ���� �Լ��� ����
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int _x, int _y) {
	this->x = _x;
	this->y = _y;
}
void Point::Print() {
	cout << x << ", " << y << endl;
}

int main() {

	Point p1, p2, p4, p5(200, 150);
	p1.x = 10;
	p1.y = 10;
	p2.x = 20;
	p2.y = 20;

	p4.Print();
	p5.Print();

	Point p3 = p2; //�ʱ�ȭ
	p3.Print();
	p3 = p1; //����
	p3.Print();

	p1.Print();
	p2.Print();

	return 0;
}