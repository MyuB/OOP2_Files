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
//�����ڿ��� ������ ���� ���������� ��ü ������ �ȵǼ� �Ҹ��� ����x
DynamicArray::DynamicArray(int arraySize) {
    try {
        arr = new int[arraySize];
        size = arraySize;
        throw MyException(this, "constructor inside", 100);
    }
    catch (...) {
        cout << "������ ���� ĳġ" << endl;
        delete[] arr;
        throw; //���� ���ܸ� �ٽ� ����
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
        b.SetAt(9, 9); //���� �߻�

        a.SetAt(20, 8); //���� �߻�
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
