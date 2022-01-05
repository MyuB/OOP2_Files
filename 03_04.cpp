#include <iostream>
#include <random>
using namespace std;

int main() {
	//이게 모던 스타일
	random_device rd; //seed
	mt19937 gen(rd()); //seed object 객체 생성
	uniform_int_distribution<int> distrib(1, 6); //균등 분포
	
	for (int i = 0; i < 10; i++) {
		cout << distrib(gen) << " ";
	}
	cout << '\n';

	int x, y;
	//문제가 있다! 왜냐면 결국 rand 표를 참고해서 생성
	//시간에 따라 구현하는 것이기 때문에 정확한 의미의 random이 아니다
	srand(time(0));
	x = rand() % 6 + 1;
	y = rand() % 6 + 1;
	cout << "x는" <<  x << " y는" << y << '\n';

	return 0;
}