#include <iostream>
using namespace std;

template <typename T>
class AutoArray {
public:
	AutoArray(T* ptr) {
		_ptr = ptr;
	}
	~AutoArray() {
		delete[] _ptr;
	}
	T& operator[] (int index) {
		return _ptr[index];
	}
private:
	T* _ptr;
};


int main() {
	AutoArray<int> arr(new int[100]);
	arr[0] = 100;
	cout << arr[0] << endl;

	AutoArray<float> arrf(new float[100]);
	arrf[0] = 10.0f;
	cout << arrf[0] << endl;

	AutoArray<short> arrs(new short[100]);
	arrs[0] = 11;
	cout << arrs[0] << endl;

	return 0;
}