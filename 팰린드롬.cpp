#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int j = s.size() - 1;
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == s[j--])
			count++;
	}
	if (count == s.size())
		cout << 1 << endl;
	else
		cout << 0 << endl;
}