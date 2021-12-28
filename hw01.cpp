#include <iostream>
using namespace std;

int main() {
	int numbers[] = { 2, 99, 13, 5 };
	void* iptr;
	iptr = numbers;
	int result = 0;
	for (int i = 0; i < sizeof(numbers)/sizeof(int); i++) {
		result += *((int*)iptr + i);
	}
	cout << result << endl;

	return 0;
}