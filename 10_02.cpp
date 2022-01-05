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
	//순수 가상함수
	virtual void Draw() const = 0; //이렇게 하면 구현 없어도 잘 돌아간다. 그러니 일반 가상함수를 사용하려면 구현이 무조건 필요하다. 그리고 멤머함수에 순수 가상함수가 한개라도 존재하면 그 클래스의 인스턴스를 생성하는 것이 불가능하다.
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
	//up casting되었다 
	//실제로 저 배열은 circle, rectangle에 대한 추론이 불가능하기 때문에 부모에서 접근할 수 있는 것은 부모의 draw가 되는 것이다
	//그러나, 부모 클래스의 draw 함수 앞에 virtual이라는 키워드를 붙이면 이 문제가 해결이 된다
	shapes[0] = new Circle(100, 100, 50); 
	shapes[1] = new Rectangle(300, 300, 50, 50);
	shapes[2] = new Rectangle(100, 200, 50, 150);
	shapes[3] = new Circle(100, 300, 150);
	shapes[4] = new Rectangle(200, 200, 200, 200);
	//에러가 없었는데 부모 클래스 shape의 draw가 호출되었다
	//가상 함수는 각각의 자식 객체의 override 된 함수들을 실행해준다
	//만약 자식 클래스에 overridde된 함수가 없으면 부모 클래스의 하수를 수행한다
	for (auto s : shapes) s->Draw();

	for (int i = 0; i < 5; i++) {
		delete shapes[i];
		shapes[i] = nullptr;
	}

	return 0;
}

//다중 상속(multiple inheritance)

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
//	s1.name = "김인하";
//	s1.dept = "CSE";
//	s1.building = "1st";
//	s1.roomNo = 404;
//	//s1.Warn(); //ambiguous error -> 어느 부모 클래스의 Warn?
//	s1.Dormitory::Warn();
//	s1.UnderGraduate::Warn();
//	//scope로 해결한다
//
//	return 0;
//}
