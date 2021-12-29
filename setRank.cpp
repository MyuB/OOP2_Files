#include <vector>
#include <algorithm>

void setRankPass(const std::vector<int>* scores, int size) {
	std::vector<int> temp = *scores;
	sort(temp.begin(), temp.end());
	for (int i = size - 1; i >= 0; --i) {
		if (temp[i] == _score) {
			_rank = size - 1;
			break;
		}
	}
	if (_rank <= size * 0.1)
		_pass = true;
}