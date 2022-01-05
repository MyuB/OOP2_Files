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
    cout << "양의 정수 입력 : ";
    //cin >> in >> quiz;
    int in; cin >> in;
    auto fact = [](int n)->int {
        int r = 1;
        for (int k = 1; k <= n; k++)
            r *= k;
        return r;
    };
    cout << fact(in) << '\n';
    //결국 람다 함수의 위치 정보를 fact가 가지고 있는 것이다.
    int (*pf)(int) = fact;
    cout << (*pf)(in) << '\n';

    void (*fPtr)(int, int&) = Factorial; //함수포인터, 매개변수로 n값과 결과를 저장할 변수를 레퍼러느로 전달
    (*fPtr)(in, quiz);
    cout << quiz << '\n';
    return 0;
}


//int main() {
//	//함수포인터: 함수 위치 정보를 받는다. 메모리 번지 주소를 받는다
//
//
//
//	return 0;
//}