#include <iostream>
#define endl '\n'
using namespace std;

class Circle {
private:
	double radius;
public:
	Circle(double radius);
	Circle();
	~Circle();
	Circle(const Circle& circle);
	void setRadius(double radius);
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
};

Circle::Circle(double rds)
	:radius(rds) {
	cout << "생성자가 호출되었습니다" << endl;
}

Circle::Circle()
	: radius(0.0) {
	cout << "기본 생성자가 호출되었습니다" << endl;
}

Circle::Circle(const Circle& circle)
	: radius(circle.radius) {
	cout << "복사 생성자 호출" << endl;
}

Circle::~Circle() {
	cout << "소멸자 호출" << radius;
	cout << endl;
}

void Circle::setRadius(double value) {
	radius = value;
}

double Circle::getRadius() const {
	return radius;
}

double Circle::getArea() const {

}