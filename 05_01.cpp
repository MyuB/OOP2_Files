#include <iostream>
using namespace std;

void Factorial(int n, int& quiz) {
    int r = 1;
    for (int k = 1; k <= n; k++)
        r = r * k;
    quiz = r;

}

int main() {
    int in, quiz;
    cout << "���� ���� �Է� : ";
    //cin >> in >> quiz;
    int in; cin >> in;
    auto fact = [](int n)->int {
        int r = 1;
        for (int k = 1; k <= n; k++)
            r *= k;
        return r;
    };
    cout << fact(in) << '\n';
    //�ᱹ ���� �Լ��� ��ġ ������ fact�� ������ �ִ� ���̴�.
    int (*pf)(int) = fact;
    cout << (*pf)(in) << '\n';

    void (*fPtr)(int, int&) = Factorial; //�Լ�������, �Ű������� n���� ����� ������ ������ ���۷����� ����
    (*fPtr)(in, quiz);
    cout << quiz << '\n';
    return 0;
}


//int main() {
//	//�Լ�������: �Լ� ��ġ ������ �޴´�. �޸� ���� �ּҸ� �޴´�
//
//
//
//	return 0;
//}