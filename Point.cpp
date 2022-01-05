#include "Point.h"

//Point::Point() :x(0), y(0) {}

//이렇게 기본 생성자로서 사용할 수 있다
Point::Point() : Point(0, 0) { //delegation
	//중복 삽입을 막아준다
}

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}
//다르게 :x(x) 이렇게 쓸 수 있다는 거 생각하자
Point::Point(const Point& pt) {
	this->x = pt.x;
	this->y = pt.y;
}
Point::~Point() {

}
