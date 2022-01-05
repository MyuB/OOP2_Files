/*
int name = value;
int *pName = &name;

int name = value;;
const int* pName = &name;

const int name = value;
const int* pName = &name;  -> �굵 ���� ��� ���ϱ���
�� ������ ��� ����
but,
const int name=  value;
int* pName = &name; 
�̰Ŵ� ��� ����. ����� �ּҴ� ������ �� ����

*/

#include <iostream>
using namespace std;

void swap(int* first, int* second) {
	int temp = *first;
	*first = *second;
	*second = temp;
}

void reverse(int* pArr, int size) {
	int i = 0;
	int j = size - 1;
	while (i < size / 2) {
		int temp = *(pArr + i);
		*(pArr + i) = *(pArr + j);
		*(pArr + j) = temp;
		i++;
		j--;
	}
}


int main() {
	int y = 20;
	int x = 10;

	cout << "before swap" << endl;
	cout << "x: " << x << " y: " << y << endl;

	swap(&x, &y);

	cout << "after swap" << endl;
	cout << "x: " << x << " y: " << y << endl;

	return 0;
}