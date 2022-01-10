#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
	list<int> iList; //��ũ�� ����Ʈ
	vector<int> iVec; //���� �迭(�������� ������ ������ ������ �� �ִ� �迭)


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