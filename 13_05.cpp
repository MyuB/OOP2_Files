#include <iostream>
#include <list>//삽입 삭제에 강함
#include <vector>//검색 위주에 강함
#include <algorithm>//정렬, 검색 등과 같은 알고리즘 구현
#include <functional>
using namespace std;

bool myf(int i, int j) { return i > j; }
struct myStruct {
	bool operator() (int i, int j) { return (i > j); }
}myObj;
class myClass {
public:
	bool operator() (int i, int j) { return (i > j); }
} myObjc;

int main() {

	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	sort(vec.begin(), vec.end()); //오름차순

	for (auto v : vec) {
		cout << v << " ";
	}
	cout << endl;
	
	sort(vec.begin(), vec.end(), myf); //내림차순 

	for (auto v : vec) {
		cout << v << " ";
	}

	sort(vec.begin(), vec.end(), myObj);
	sort(vec.begin(), vec.end(), myObjc);
	sort(vec.begin(), vec.end(), greater<char>());

	sort(vec.begin(), vec.end(), [](int i, int j) {return i > j; });

	for (auto c : vec) cout << c << " ";
	cout << '\n';

	return 0;
}