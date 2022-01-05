#include <iostream>
using namespace std;

//inline�� �ڵ尡 ª�� �����Ҷ��� ����ϴ°� ��õ
//���� ������ �����Ϸ��� �����Ѵ�

//typedef int CORD_T;

class Point {
private:
	int x, y;

public:
	Point();
	Point(int x, int y);
	Point(const Point& pt);
	~Point();

	void setX(int x);
	void setY(int y);
	int getX() const { return this->x; } //inline member func
	int getY() const { return this->y; } //inline member func
};
Point::Point() :x(0), y(0){}
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}
//�ٸ��� :x(x) �̷��� �� �� �ִٴ� �� ��������
Point::Point(const Point& pt) {
	this->x = pt.x;
	this->y = pt.y;
}
Point::~Point() {

}
inline void Point::setX(int x) {
	if (x < 0) this->x = 0;
	else if (x > 100) this->x = 100;
	else this->x = x;
}
inline void Point::setY(int y) {
	if (y < 0) this->y = 0;
	else if (y > 100) this->y = 100;
	else this->y = y;
}

int main() {

	Point p1, p2(77, 51);
	cout << p1.getX() << ", " << p1.getY() << '\n';
	cout << p2.getX() << ", " << p2.getY() << '\n';
	p1.setX(-91);
	p1.setY(91);
	Point p3(p2);
	cout << p1.getX() << ", " << p1.getY() << '\n';
	cout << p3.getX() << ", " << p3.getY() << '\n';

	return 0;
}