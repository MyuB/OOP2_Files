/*
int name = value;
int &rName = name; ����

const int name = value;
int& rName = name; �ȵ�

int name = value;
const int& rName = name; ����

const int name = value;
const int& rName = name; ����
*/

#include <iostream>
using namespace std;

void swap(int& first, int& second) {
	int temp = first;
	first = second;
	second = temp;
}

int main() {
	int y = 20;
	int x = 10;

	cout << "before swap" << endl;
	cout << "x: " << x << " y: " << y << endl;

	swap(x, y);

	cout << "after swap" << endl;
	cout << "x: " << x << " y: " << y << endl;

	return 0;
}