#include <iostream>
using namespace std;

template <typename T>
T maxi(T a, T b) {
	return (a > b) ? a : b;
}

int main() {
	int i1 = 7, i2 = 4;
	int i3 = maxi(i1, i2);
	cout << i3 << endl;

	double d1 = 3.14, d2 = 2.71;
	double d3 = maxi(d1, d2);
	cout << d3 << endl;

	return 0;

}