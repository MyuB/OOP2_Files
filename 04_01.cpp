#include <iostream>
using namespace std;

//enum Color { RED, GREEN, BLUE, YELLOW };
////이렇게 쓰면 에러남 같은 변수? 명을 사용할 수 없음
////enum Java { PASS, FAIL };
////enum Python {PASS, FAIL};
//
//int main() {
//	Color c1 = RED;
//	Color c2;
//
//	//명시적 castring 후 대입 가능
//	//문제는 저 enum 을 넘어가는 숫자가 대입이 되면 그 결과 보장x
//	Color c3 = (Color)2; //blue 대입하는거랑 똑같음
//	cout << c3 << endl;
//
//	//산술 연산이 불가능하다
//	//c1 = GREEN + BLUE; 
//	//c1 = c1 + 2;
//
//	//정수 대입 불가
//	//c2 = 3;
//
//	//반대의 경우 할당과 산술 연산이 가능하다
//	//묵시적 casting 진행
//	int n = BLUE;
//	int o = GREEN + BLUE;
//
//	cout << n << endl;
//	cout << o << endl;
//	
//	return 0;
//}

//enum JOB_KINDS {JOB_NECROMENCER, JOB_BARBABRIAN, JOB_WIZARD };
//
//struct Character{
//	JOB_KINDS jobType; // 0: 강렬술사, 1: 야만용사, 2: 마법사
//};
//
//int main() {
//	Character c;
//	c.jobType = JOB_WIZARD;
//	if (c.jobType == JOB_WIZARD) {
//		cout << "비전격류!" << endl;
//	}
//
//	cout << c.jobType << endl;
//
//	return 0;
//}