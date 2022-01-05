#include <iostream>
using namespace std;

class DynamicArray {
public:
    DynamicArray(int arraySize);
    ~DynamicArray();

    void SetAt(int index, int value);
    int GetAt(int index) const;
    int GetSize() const;

protected:
    int* arr;
    int size;
};
DynamicArray::DynamicArray(int arraySize) {
    arr = new int[arraySize];
    size = arraySize;
}
DynamicArray::~DynamicArray() {
    delete[] arr;
    arr = nullptr;
}
void DynamicArray::SetAt(int index, int value) {
    if (index < 0 || index >= GetSize())
        throw "Out of Range!";
        //throw 1213535525;
    arr[index] = value;
}
int DynamicArray::GetAt(int index) const {
    return arr[index];
}
int DynamicArray::GetSize() const {
    return size;
}

int main() {
    DynamicArray arr(10);
    
    try {
        arr.SetAt(0, 1);
        arr.SetAt(10, 99);
        arr.SetAt(5, 1);
    }
    //type에 맞는 catch 구문이 돈다 -> 엄격한 타입 검사
    catch (const char* e) {
        cout << "예외 :" << e << endl;
    }
    catch (const int i) {
        cout << "예외 번호: " << i << endl;
    }
    catch (const std::exception&) {

    }

    return 0;
}

/*
2시 반부터 퀴즈 시작
정면, 측면, 녹화
깃헙 사용
100분
신분증 검사하니까 조금 일찍 와라
*/