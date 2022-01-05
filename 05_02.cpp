#include <iostream>
#include <functional>
using namespace std;
//recursion (재귀) overhead 
// 피보나치 
// n = 0, 
// f(0) = 0
// f(1) = 1
// f(2) = f(n-1) + f(n-2)

//memoization -> recursion 의 성능 향상
//한번 방문한 결과값을 배열에 저장하고 다시 해당 결과를 찾아서 쓰면 재귀x
//but memory공간을 소요

int memo[100];
unsigned int mf(int n) {
	if (n <= 1)
		return n;
	else if (memo[n] != 0) // 배열에 값이 존재하면 그 값 리턴
		return memo[n];
	else {
		memo[n] = (mf(n - 2) + mf(n - 1));//처음 방문 결과 저장
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
//    //함수가 인수로 전달
//
//    auto second = [](const char* a, int b)->int {
//        cout << a << " / " << b;
//        return 0;
//    };
//    //Test("C++", second); 이렇게도 가능하다 근데 일회용 함수를 굳이? just for 가독성
//
//    Test("C++", 
//        [](const char* a, int b)->int {
//            cout << a << " / " << b;
//            return 0;
//         });
//
//    return 0;
//}