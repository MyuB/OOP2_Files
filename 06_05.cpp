#include <iostream>
#define endl '\n'
using namespace std;

class DynamicArray {
public:
	int* arr;
	DynamicArray(int arraySize);
	~DynamicArray();
};
DynamicArray::DynamicArray(int arraySize) {
	arr = new int[arraySize];
}
DynamicArray::~DynamicArray() {
	delete[] arr;
	arr = NULL;
}

int main() {
	int size; 
	cout << "�� ���� ����?";
	cin >> size;

	DynamicArray da(size);

	for (int i = 0; i < size; i++) {
		cin >> da.arr[i];
	}
	for (int i = size - 1; i >= 0; i--) {
		cout << da.arr[i] << " ";
	}
	cout << endl;

	return 0;
}

//class NeddConstructor {
//public:
//	const int max;
//	int& ref;
//	int temp;
//
//	NeddConstructor();
//	NeddConstructor(int cnt, int& number);
//};
//NeddConstructor::NeddConstructor()
//	:max(100),ref(temp) {
//	temp = 10;
//}
//NeddConstructor::NeddConstructor(int cnt, int& number)
//	: max(cnt), ref(number) {
//	temp = 10;
//}
//int main() {
//	//const�� ���� ������ �����ڿ��� �ʱ�ȭ ���־���!
//	NeddConstructor cr;
//	int num = 400;
//	NeddConstructor cr1(500, num);
//	
//	//cr.max = 1000;
//	cout << cr.max << endl;
//	cout << cr.ref << endl;
//	cout << cr1.max << endl;
//	cout << cr1.ref << endl;
//}

//class Point {
//public:
//	int x, y;
//	Point(); //�����ڴ� ����Ÿ�� ����, Ŭ������ �̸��� ����
//	Point(int _x, int _y);
//	Point(const Point& pt); //���� ������: �ڽŰ� ������ Ÿ���� ��ü�� ���� ���۷����� ���ڷ� �޴� ������ Point(Point& pt);
//	void Print();
//
//};
//Point::Point() {
//	x = 0;
//	y = 0;
//}
//Point::Point(int _x, int _y) {
//	this->x = _x;
//	this->y = _y;
//}
//Point::Point(const Point& pt) {
//	cout << "Copy constructor!" << endl;
//	this->x = pt.x;
//	this->y = 0;
//}
//void Point::Print() {
//	cout << x << ", " << y << endl;
//}
//
//int main() {
//
//	Point p1, p2, p4, p5(200, 150);
//	p1.x = 10;
//	p1.y = 10;
//	p2.x = 20;
//	p2.y = 20;
//
//	Point p6(p1);
//	p4.Print();
//	p5.Print();
//
//	Point p3 = p2; //�ʱ�ȭ
//	p3.Print();
//	p3 = p1; //����
//	p3.Print();
//
//	p1.Print();
//	p2.Print();
//
//	return 0;
//}