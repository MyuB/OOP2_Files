#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
	list<int> iList; //링크드 리스트
	vector<int> iVec; //동적 배열(동적으로 원소의 개수를 조절할 수 있는 배열)


	for (auto i = 0; i < 10; i++) {
		iList.push_back(i);
	}

	iList.remove(5);

	//old school
	list<int>::iterator it;
	for (it = iList.begin(); it != iList.end(); ++it) {
		cout << *it << endl;
	}

	//modern
	//auto k = iList.begin();
	//cout << typeid(k).name() << endl;
	//for (; k != iList.end(); ++k) {
	//	cout << *k << endl;
	//}

	return 0;

}