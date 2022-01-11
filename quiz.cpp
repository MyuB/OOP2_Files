#include <iostream>
#include <random>
#define endl '\n'
using namespace std;

class Shape {
public:
	Shape() {
		this->x = 0;
		this->y = 0;
		this->h = 0;
	}
	Shape(int x, int y, int h) {
		this->x = x;
		this->y = y;
		this->h = h;
	}
	void setCord(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void setHeight(int h) {
		this->h = h;
	}
	virtual ~Shape() {
		cout << "도형 소멸" << endl;
	}
protected:
	int x;
	int y;
	int h;
};

class Rectangle : public Shape {
public:
	Rectangle(int x, int y, int size) : Shape(x, y, size) {
		this->w = 10;
		this->l = 10;
	}
	virtual ~Rectangle() {
		cout << "정사각형 소멸" << endl;
	}
protected: 
	int l;
	int w;
};

class Cube : public Rectangle {
	friend istream& operator >> (istream& o, Cube& right);
public:
	Cube(int x, int y, int size): Rectangle(x, y, size) {

	}
	virtual ~Cube() {
		cout << "정육면체 소멸" << endl;
	}
	void Draw() const {
		cout << "[정육면체] 좌표 = (" << this->x << ", " << this->y << ") 부피 = " << this->GetVolume() << endl;
	}
	void setSize(int x) {
		this->w = x;
		this->l = x;
		this->h = x;
	}
	int GetVolume() const {
		return w * l * h;
	}
protected:
};

class Random {
public:
	int Draw() {
		return Draw(1, 6);
	}
	int Draw(int a, int b) {
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<int> d(a, b);
		return d(gen);
	}
};

class Dice : public Cube, public Random {
public:
	Dice() :Cube(0, 0, 10) {

	}
	Dice(int x, int y) :Cube(x, y, 10) {

	}
	virtual ~Dice() {
		cout << "주사위 소멸" << endl;
	}

private:
};

istream& operator >> (istream& o, Cube& right) {
	cout << "길이 입력: ";
	int x; cin >> x;
	right.setSize(x);
	return o;
}

class Circle : public Shape {
public:
	Circle() {
		this->r = 10;
		this->h = 10;
	}
	virtual ~Circle() {
		cout << "원 소멸" << endl;
	}
protected:
	const double pi = 3.14;
	int r;
};

class Cylinder : public Circle {
	friend istream& operator >> (istream& o, Cylinder& right);

public:
	Cylinder() {

	}
	~Cylinder() {
		cout << "원기둥 소멸" << endl;
	}
	void Draw() const {
		cout << "[원기둥] 좌표 = (" << this->x << ", " << this->y << ") 부피 = " << GetVolume() << endl;
	}
	double GetVolume() const {
		return pi * r * r * h;
	}

private:
};

istream& operator >> (istream& o, Cylinder& right) {
	cout << "높이 입력: ";
	int h;
	cin >> h; right.setHeight(h);
	cout << "x, y 좌표 입력 :";
	int x, y; cin >> x >> y;
	right.setCord(x, y);

	return o;
}

bool operator> (Dice& d, Cylinder& c) {
	return (d.GetVolume() > c.GetVolume());
}

int main() {
	// main함수 코드는 아래 주어진 그대로 사용합니다 (채점시 아래 코드 사용)
	int menu = 0;

	while (1) {
		cout << "1) 주사위 기본모드  2) 주사위 크기조정  3) 주사위 위치변경  4) 원기둥  5) 기본형 부피비교  6) 종료 : ";
		cin >> menu;

		if (menu == 1) {
			Dice d1;
			d1.Cube::Draw();
			for (int i = 0; i < 5; i++)
				cout << d1.Random::Draw(1, 6) << " ";
			cout << "\n";
		}
		else if (menu == 2) {
			Dice d2;
			cin >> d2;

			d2.Cube::Draw();
			for (int i = 0; i < 5; i++)
				cout << d2.Random::Draw() << " ";
			cout << "\n";
		}
		else if (menu == 3) {
			double x, y;
			cout << "x, y 좌표 입력 : ";
			cin >> x >> y;

			Dice* d3 = new Dice(x, y);

			d3->Cube::Draw();
			for (int i = 0; i < 5; i++)
				cout << d3->Random::Draw() << " ";
			cout << "\n";

			delete d3;
			d3 = nullptr;
		}
		else if (menu == 4) {
			Cylinder c1;
			cin >> c1;
			c1.Draw();
			cout << "\n";
		}
		else if (menu == 5) {
			Dice d4;
			Cylinder c2;

			if (d4 > c2) {
				cout << "주사위의 부피가 더 큽니다\n";
			}
			else {
				cout << "원기둥의 부피가 더 큽니다\n";
			}
			cout << "주사위 부피 : " << d4.GetVolume() << endl;
			cout << "원기둥 부피 : " << c2.GetVolume() << endl;
		}
		else if (menu == 6) {
			cout << "* 프로그램을 종료합니다 *\n";
			break;
		}
		else
			cout << "메뉴에서 골라주세요.\n";
	}
	return 0;
}