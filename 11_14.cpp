class AutoArr {
private:
	int* ptr;
public:
	AutoArr(int* ptr) : ptr(ptr) {}
	~AutoArr() {
		delete[] ptr;
	}
	int& operator[] (int index) {
		return ptr[index];
	}
};

int main() {
	AutoArr arr(new int[100]);
	arr[0] = 100;
	return 0;
}