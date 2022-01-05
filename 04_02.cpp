#include <iostream>
using namespace std;

//int main() {
//	
//	int a = 1;
//	int b = 2;
//	//rule 1 초기화
//	int& c = a;
//
//	c = 3;
//	cout << c << a<< endl;
//	//rule 2 b 의 값을 대입, 참조하는게 아님
//	c = b;
//	cout << c <<a <<  endl;
//	c = 4;
//	cout << a << endl;
//
//	//이렇게는 또 가능하다
//	int t = 5;
//	const int& rt = 9;
//
//	// 자료타입 &변수이름 = 대상변수;
//	short s = 5;
//	short& rs = s; //레퍼런스
//	short* ps = &s;//포인터
//
//	////레퍼런스는 같은 주소를 공유
//	cout << s << " " << &s <<  endl;
//	cout << rs << " " << &rs << endl;
//	cout << *ps << " " << &ps << endl;
//
//	return 0;
//}

//열거형
//namespace 는 물리적으로 다른 공간을 할당해준다
//살짝은 올드한 꼼수임
//namespace sophomore {
//	enum Java { PASS, FAIL };
//}
//namespace freshman {
//	enum Python { PASS, FAIL };
//}

//모던 스타일 (enum class)
//enum class Java { PASS, FAIL };
//enum class Python { PASS, FAIL };
//enum class Cpp { PASS, FAIL };
//
//int main() {
//	
//	Cpp c = Cpp::PASS;
//	switch (c) {
//		//이 enum class의 변수들은 strong하게 되어서 정수형을 사용 불가
//		// case 0: 이렇게 못씀
//	case Cpp::PASS:
//		cout << "합격" << '\n';
//		break;
//	case Cpp::FAIL:
//		cout << "재수강" << '\n';
//		break;
//	default:
//		break;
//	}
//
//	return 0;
//}