#include <iostream>
#include <string>
using namespace std;

//���ø� �Ⱦ���
//void For_each(int* start, int* end, void (*pfunc)(int)) {
//	while (start != end) 
//		pfunc(*start++);
//}

//�л� �ڵ� Ÿ�� �ϳ��� ó��
//template<typename T, typename F>
//void For_each(T* start, T* end, void (*pFunc)(T)) {
//	while (start != end) {
//		pFunc(*start++);
//	}
//}
//template<typename T>
//void print(T n) {
//	cout << n << " ";
//}

//template<typename T, typename F>
//void For_each(T start, T end, F pfunc) {
//	while (start != end) {
//		pfunc(*start++);
//	}
//}
//void PrintInt(int n) {
//	cout << n << " ";
//}
//void PrintString(string n) {
//	cout << n << " ";
//}

//typename�� class�ε� ����� �� �ִ�
//�ٸ� ����� �ڵ�
//�� ����� ������ ��Ȯ�ϰ� �Լ��� Ÿ���� ������Ѵ� <>
template<typename T, typename F>
void For_each(T start, T end, F pfunc) {
	while (start != end) {
		pfunc(*start++);
	}
}
template<typename T>
void Print(T n) {
	cout << n << " ";
}

int main() {

	int arr[5] = { 7, 2, 3, 4, 5 };
	string sarr[3] = { "a", "b", "c" };
	//For_each(arr, arr + 5, PrintInt);
	For_each<int*, void (*)(int)>(arr, &arr[5], Print);
	cout << '\n';
	For_each<string*, void (*)(string)>(sarr, sarr + 3, Print);
	return 0;

}

//std �ȿ� max��� �Լ��� �̹� ���ǵǾ� �ִ�
//template<typename T> 
//T maxx(T a, T b) {
//	return (a > b) ? a : b;
//}
//
//int main() {
//
//	int i1 = 7, i2 = 10;
//	int i3 = maxx(i1, i2);
//	std::cout << i3 << std::endl;
//
//	double d1 = 3.14, d2 = 2.71;
//	double d3 = maxx(d1, d2);
//	std::cout << d3 << std::endl;
//	return 0;
//}