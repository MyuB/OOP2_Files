#include <iostream>
#include <string>
using namespace std;

//템플릿 안쓰고
//void For_each(int* start, int* end, void (*pfunc)(int)) {
//	while (start != end) 
//		pfunc(*start++);
//}

//학생 코드 타입 하나로 처리
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

//typename은 class로도 사용할 수 있다
//다른 방법의 코드
//이 방식을 쓰려면 명확하게 함수의 타입을 써줘야한다 <>
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

//std 안에 max라는 함수가 이미 정의되어 있다
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