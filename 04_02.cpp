#include <iostream>
using namespace std;

//int main() {
//	
//	int a = 1;
//	int b = 2;
//	//rule 1 �ʱ�ȭ
//	int& c = a;
//
//	c = 3;
//	cout << c << a<< endl;
//	//rule 2 b �� ���� ����, �����ϴ°� �ƴ�
//	c = b;
//	cout << c <<a <<  endl;
//	c = 4;
//	cout << a << endl;
//
//	//�̷��Դ� �� �����ϴ�
//	int t = 5;
//	const int& rt = 9;
//
//	// �ڷ�Ÿ�� &�����̸� = ��󺯼�;
//	short s = 5;
//	short& rs = s; //���۷���
//	short* ps = &s;//������
//
//	////���۷����� ���� �ּҸ� ����
//	cout << s << " " << &s <<  endl;
//	cout << rs << " " << &rs << endl;
//	cout << *ps << " " << &ps << endl;
//
//	return 0;
//}

//������
//namespace �� ���������� �ٸ� ������ �Ҵ����ش�
//��¦�� �õ��� �ļ���
//namespace sophomore {
//	enum Java { PASS, FAIL };
//}
//namespace freshman {
//	enum Python { PASS, FAIL };
//}

//��� ��Ÿ�� (enum class)
//enum class Java { PASS, FAIL };
//enum class Python { PASS, FAIL };
//enum class Cpp { PASS, FAIL };
//
//int main() {
//	
//	Cpp c = Cpp::PASS;
//	switch (c) {
//		//�� enum class�� �������� strong�ϰ� �Ǿ �������� ��� �Ұ�
//		// case 0: �̷��� ����
//	case Cpp::PASS:
//		cout << "�հ�" << '\n';
//		break;
//	case Cpp::FAIL:
//		cout << "�����" << '\n';
//		break;
//	default:
//		break;
//	}
//
//	return 0;
//}