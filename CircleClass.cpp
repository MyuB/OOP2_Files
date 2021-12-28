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
	cout << "�����ڰ� ȣ��Ǿ����ϴ�" << endl;
}

Circle::Circle()
	: radius(0.0) {
	cout << "�⺻ �����ڰ� ȣ��Ǿ����ϴ�" << endl;
}

Circle::Circle(const Circle& circle)
	: radius(circle.radius) {
	cout << "���� ������ ȣ��" << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ȣ��" << radius;
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