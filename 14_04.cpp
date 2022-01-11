#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {

	vector<pair<int, string>> soldier;

	soldier.push_back({2, "����ȣ"});
	soldier.push_back({3, "��ȣ��"});
	soldier.push_back({4, "Ȳ���"});
	soldier.push_back({3, "���̰�"});
	soldier.push_back({3, "������"});
	soldier.push_back({1, "������"});

	//vector<pair<int, string>>::iterator it;
	//for (it = soldier.begin(); it != soldier.end(); it++) {
	//	cout << it->first << " " << it->second << endl;
	//}

	//for (int i = 0; i < soldier.size(); i++) {
	//	cout << soldier[i].first << ": " << soldier[i].second << endl;
	//}

	sort(soldier.begin(), soldier.end(), greater<>());
	for (auto s : soldier)
		cout << s.first << ": " << s.second << endl;

	return 0;
}