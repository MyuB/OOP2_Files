#include <iostream>
#include <list>//���� ������ ����
#include <vector>//�˻� ���ֿ� ����
#include <algorithm>//����, �˻� ��� ���� �˰��� ����
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

	sort(vec.begin(), vec.end()); //��������

	for (auto v : vec) {
		cout << v << " ";
	}
	cout << endl;
	
	sort(vec.begin(), vec.end(), myf); //�������� 

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