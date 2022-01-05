#include <iostream>
#define endl '\n'
using namespace std;

/* 구초체 vs 클래스
1. class 키워드 사용
2. public 같은 접근 제어와 관련된 키워드 사용
3. 멤버 함수(메서드)를 정의할 수 있음
*/
//생성자: 객체를 생성할 때 자동적으로 호출되는 함수
//소명자: 객체가 소멸될 떄 자동적으로 호출되는 함수
class Point {
public:
	int x, y;
	Point(); //생성자는 리턴타입 없고, 클래스의 이름과 같다
	Point(int _x, int _y);
	void Print();

};
// 1.클래스 정의 안에는 메서드의 프로토타입만 남겨둔다
// 2.클래스 정의 밖에서는 범위지정 연산자를 통해 함수를 정의
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int _x, int _y) {
	this->x = _x;
	this->y = _y;
}
void Point::Print() {
	cout << x << ", " << y << endl;
}

int main() {

	Point p1, p2, p4, p5(200, 150);
	p1.x = 10;
	p1.y = 10;
	p2.x = 20;
	p2.y = 20;

	p4.Print();
	p5.Print();

	Point p3 = p2; //초기화
	p3.Print();
	p3 = p1; //대입
	p3.Print();

	p1.Print();
	p2.Print();

	return 0;
}