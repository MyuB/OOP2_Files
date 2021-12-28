#include <iostream>
using namespace std;

union QuizUnion {
	char i;
	char* p;
}uni;

int main() {
	uni.p = (char*)0x12345642;
	cout << uni.i;

	return 0;
}

/*
uni라고 이름이 붙여진 공용체가 있다
이 공용체의 크기는 4byte이다(linux 환경에서는 8byte가 될 것)
주어진 공용체의 문자 포인터에 0x12345642을 저장시키게 되면
이 공용체의 별다른 수정이 없으면 이 공용체에서는 0x12345642가 사용된다
이제 uin.i의 1byte 문자를 출력을 하려고 하는데, 이는 b가 나오게 된다
인텔 혹은 amd cpu쪽 컴파일러 혹은 os에서는 litten endian으로 주소가 저장되기에 
실제 메모리 공간에는 42 56 34 12 로 저장되게 되고 uni.i가 하나의 byte를 앞에서 부터 읽기 때문에
이 아스키코드 값을 읽어 b가 출력이 되는 것이다.
*/