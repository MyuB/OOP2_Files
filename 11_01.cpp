#include <iostream>
#include "myException.h"
using namespace std;

class DynamicArray {
public:
    DynamicArray(int arraySize);
    ~DynamicArray();

    void SetAt(int index, int value);
    int GetAt(int index) const;
    int GetSize() const;
    void UseArray(DynamicArray& a, DynamicArray& b);

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
        throw MyException(this, "Out of Range", index);
    //throw 1213535525;
    arr[index] = value;
}
int DynamicArray::GetAt(int index) const {
    return arr[index];
}
int DynamicArray::GetSize() const {
    return size;
}
void UseArray(DynamicArray& a, DynamicArray& b) {
    try {
        a.SetAt(3, 29);
        b.SetAt(3, 29);

        a.SetAt(9, -17);
        b.SetAt(9, 9); //예외 발생

        a.SetAt(20, 8); //예외 발생
        b.SetAt(23, 29);
    }
    catch (MyException& e) {
        cout << &a << ", " << &b << endl;
        cout << e.sender << endl;
        cout << e.description << endl;
        cout << e.info << endl;
    }
}

int main() {
    DynamicArray arr1(10);
    DynamicArray arr2(7);

    UseArray(arr1, arr2);

    return 0;
}
