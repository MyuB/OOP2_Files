#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

//map: 연관 컨테이너 key, value 쌍으로 저장하는 자료구조

int main() {

	map<string, int> scores;
	scores["성윤모"] = 50;
	scores["박민석"] = 60;
	scores["심우진"] = 100;

	map<string, int>::iterator it;
	for (it = scores.begin(); it != scores.end(); it++) {
		cout << setw(10) << it->first << " " << setw(4) << it->second << endl;
	}

	for (auto s : scores) {
		cout << setw(10) << s.first << " " << setw(4) << s.second << endl;
	}

	return 0;
}