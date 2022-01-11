#include <iostream>
#include <utility>
#include <vector>
using namespace std;

template<typename T1, typename T2>
struct inha {
	T1 first;
	T2 second;
	inha(T1 first, T2 second) : first(first), second(second) {}
};
//struct를 class로 구현도 가능하다

int main() {
	//pair<int, int> p1(1, 2);
	pair<int, int> p1 = { 1, 2 };
	cout << p1.first << " / " << p1.second << endl;

	inha<int, string> p2 = { 1, "one"};
	cout << p2.first << " / " << p2.second << endl;

	return 0;
}