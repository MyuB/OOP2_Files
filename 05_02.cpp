#include <iostream>
#include <functional>
using namespace std;
//recursion (���) overhead 
// �Ǻ���ġ 
// n = 0, 
// f(0) = 0
// f(1) = 1
// f(2) = f(n-1) + f(n-2)

//memoization -> recursion �� ���� ���
//�ѹ� �湮�� ������� �迭�� �����ϰ� �ٽ� �ش� ����� ã�Ƽ� ���� ���x
//but memory������ �ҿ�

int memo[100];
unsigned int mf(int n) {
	if (n <= 1)
		return n;
	else if (memo[n] != 0) // �迭�� ���� �����ϸ� �� �� ����
		return memo[n];
	else {
		memo[n] = (mf(n - 2) + mf(n - 1));//ó�� �湮 ��� ����
		return memo[n];
	}
}

unsigned int f(int n) {
	if (n <= 1)
		return n;
	else
		return f(n - 1) + f(n - 2);
}
int main() {

	cout << f(5) << '\n';

	return 0;
}


//void Test(const char* str, function<int(const char*, int)> p) {
//    cout << str << '\n';
//    p("hi lambda", 100);
//}
//
//int main() {
//    //�Լ��� �μ��� ����
//
//    auto second = [](const char* a, int b)->int {
//        cout << a << " / " << b;
//        return 0;
//    };
//    //Test("C++", second); �̷��Ե� �����ϴ� �ٵ� ��ȸ�� �Լ��� ����? just for ������
//
//    Test("C++", 
//        [](const char* a, int b)->int {
//            cout << a << " / " << b;
//            return 0;
//         });
//
//    return 0;
//}