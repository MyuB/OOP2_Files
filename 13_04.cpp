#include <iostream>
#include <list>//삽입 삭제에 강함
#include <vector>//검색 위주에 강함
#include <algorithm>//정렬, 검색 등과 같은 알고리즘 구현
using namespace std;

int main() {

	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	for (auto v : vec) {
		cout << v << " ";
	}
	cout << endl;

	for (auto i = vec.begin(); i != vec.end(); i++) 
		cout << *i << endl;
	
	sort(vec.begin(), vec.end());

	//old
	//vector<char>::iterator it;
	//for (it = vec.begin(); it != vec.end(); it++) {
	//	cout << *it << " ";
	//}

	for (auto i = vec.begin(); i != vec.end(); i++)
		cout << *i << " ";
	cout << endl;

	char arr[5] = { 'e', 'b', 'a', 'd', 'c' };
	sort(arr, arr + 5);
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << '\n';
	for (char* p = arr; p != arr + 5; p++) {
		cout << *p << " ";
	}
	cout << '\n';

	return 0;
}