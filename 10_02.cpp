#include <iostream>
#define endl '\n'
using namespace std;

//virtual function
class Shape {
protected:
	double x, y;
public:
	Shape() :x(0.0), y(0.0) {};
	Shape(double x, double y) :x(x), y(y) {};

	void Move(double x, double y) {
		this->x = x;
		this->y = y;
	}
	//virtual void Draw() const {
	//	cout << "[Shape] Position = (" << x << ", " << y << ") " << endl;
	//}
	//���� �����Լ�
	virtual void Draw() const = 0; //�̷��� �ϸ� ���� ��� �� ���ư���. �׷��� �Ϲ� �����Լ��� ����Ϸ��� ������ ������ �ʿ��ϴ�. �׸��� ����Լ��� ���� �����Լ��� �Ѱ��� �����ϸ� �� Ŭ������ �ν��Ͻ��� �����ϴ� ���� �Ұ����ϴ�.
};

class Rectangle :public Shape {
private:
	double w, h;
public:
	Rectangle() { this->w = this->h = 10.0; }
	Rectangle(double x, double y, double w, double h) :Shape::Shape(x, y){
		Resize(w, h);
	}
	void Resize(double w, double h) {
		this->w = w; this->h = h;
	}
	//override
	void Draw() const {
		cout << "[Rectangle] Position = (" << x << ", " << y << ") Size = (" << this->w << ", " << this->h << ")" << endl;
	}
};

class Circle :public Shape {
private:
	double r;
public:
	Circle() { this->r = 10.0; }
	Circle(double x, double y, double r) :Shape::Shape(x, y) {
		setR(r);
	}
	void setR(double r) {
		this->r = r;
	}
	//override
	void Draw() const {
		cout << "[Circle] Position = (" << x << ", " << y << ") Radius = (" << this->r << ")" << endl;
	}
};

int main() {
	
	Shape* shapes[5]{ NULL, };
	//up casting�Ǿ��� 
	//������ �� �迭�� circle, rectangle�� ���� �߷��� �Ұ����ϱ� ������ �θ𿡼� ������ �� �ִ� ���� �θ��� draw�� �Ǵ� ���̴�
	//�׷���, �θ� Ŭ������ draw �Լ� �տ� virtual�̶�� Ű���带 ���̸� �� ������ �ذ��� �ȴ�
	shapes[0] = new Circle(100, 100, 50); 
	shapes[1] = new Rectangle(300, 300, 50, 50);
	shapes[2] = new Rectangle(100, 200, 50, 150);
	shapes[3] = new Circle(100, 300, 150);
	shapes[4] = new Rectangle(200, 200, 200, 200);
	//������ �����µ� �θ� Ŭ���� shape�� draw�� ȣ��Ǿ���
	//���� �Լ��� ������ �ڽ� ��ü�� override �� �Լ����� �������ش�
	//���� �ڽ� Ŭ������ overridde�� �Լ��� ������ �θ� Ŭ������ �ϼ��� �����Ѵ�
	for (auto s : shapes) s->Draw();

	for (int i = 0; i < 5; i++) {
		delete shapes[i];
		shapes[i] = nullptr;
	}

	return 0;
}

//���� ���(multiple inheritance)

//class UnderGraduate {
//public:
//	string name;
//	string dept;
//	void Warn() {};
//};
//
//class Dormitory {
//public:
//	string building;
//	int roomNo;
//	void Warn() {};
//};
//
//class Undergrad_Dorm : public UnderGraduate, public Dormitory{
//public:
//
//};
//
//int main() {
//	Undergrad_Dorm s1;
//	s1.name = "������";
//	s1.dept = "CSE";
//	s1.building = "1st";
//	s1.roomNo = 404;
//	//s1.Warn(); //ambiguous error -> ��� �θ� Ŭ������ Warn?
//	s1.Dormitory::Warn();
//	s1.UnderGraduate::Warn();
//	//scope�� �ذ��Ѵ�
//
//	return 0;
//}
