#include "Point.h"

//Point::Point() :x(0), y(0) {}

//�̷��� �⺻ �����ڷμ� ����� �� �ִ�
Point::Point() : Point(0, 0) { //delegation
	//�ߺ� ������ �����ش�
}

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
