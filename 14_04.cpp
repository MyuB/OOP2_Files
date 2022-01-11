#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {

	vector<pair<int, string>> soldier;

	soldier.push_back({2, "안준호"});
	soldier.push_back({3, "힌호열"});
	soldier.push_back({4, "황장수"});
	soldier.push_back({3, "류이강"});
	soldier.push_back({3, "조석봉"});
	soldier.push_back({1, "김인하"});

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