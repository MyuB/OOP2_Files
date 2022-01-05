#include <iostream>
#include "Point.h"

int main() {

	Point p1, p2(77, 51);
	p1.Print();
	p2.Print();
	p1.setX(-91);
	p1.setY(91);
	Point p3(p2);
	p1.Print();
	p3.Print();

	Point* p4 = new Point(); //�⺻ ������, �� 
	Point* p5 = new Point(9, 20); //�Ű����� ������, ��
	Point* p6 = new Point(p1); //���� ������, ��

	(*p4).Print();
	(*p4).setX(3);
	p4->Print();
	p5->Print();
	p6->Print();

	delete p4, p5, p6;
	p4 = p5 = p6 = nullptr;

	return 0;
}