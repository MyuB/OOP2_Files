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

protected:
    int* arr;
    int size;
};
//생성자에서 에러가 나면 정상적으로 객체 생성이 안되서 소멸자 동작x
DynamicArray::DynamicArray(int arraySize) {
    try {
        arr = new int[arraySize];
        size = arraySize;
        throw MyException(this, "constructor inside", 100);
    }
    catch (...) {
        cout << "생성자 안쪽 캐치" << endl;
        delete[] arr;
        throw; //받은 예외를 다시 던짐
    }
    
}
DynamicArray::~DynamicArray() {
    try {
        cout << "destroyer" << '\n';
        delete[] arr;
        arr = nullptr;
    }
    catch (...) {

    }
    
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
    try
    {
        DynamicArray arr1(100);
    }
    catch (MyException& e)
    {
        cout << e.description << '\n';
    }
    

    return 0;
}
