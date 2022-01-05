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
    //type�� �´� catch ������ ���� -> ������ Ÿ�� �˻�
    catch (const char* e) {
        cout << "���� :" << e << endl;
    }
    catch (const int i) {
        cout << "���� ��ȣ: " << i << endl;
    }
    catch (const std::exception&) {

    }

    return 0;
}

/*
2�� �ݺ��� ���� ����
����, ����, ��ȭ
���� ���
100��
�ź��� �˻��ϴϱ� ���� ���� �Ͷ�
*/