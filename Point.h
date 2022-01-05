#pragma once
#include <iostream>
using namespace std;

//inline 함수는 header 파일 쪽에 구현 해주는 것이 더 좋다
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

	void Print() const {
		cout << "(" << this->getX() << ", " << this->getY() << ")" << endl;
	}
};

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