#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

//map: ���� �����̳� key, value ������ �����ϴ� �ڷᱸ��

int main() {

	map<string, int> scores;
	scores["������"] = 50;
	scores["�ڹμ�"] = 60;
	scores["�ɿ���"] = 100;

	map<string, int>::iterator it;
	for (it = scores.begin(); it != scores.end(); it++) {
		cout << setw(10) << it->first << " " << setw(4) << it->second << endl;
	}

	for (auto s : scores) {
		cout << setw(10) << s.first << " " << setw(4) << s.second << endl;
	}

	return 0;
}