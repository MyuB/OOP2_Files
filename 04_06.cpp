#include <iostream>
using namespace std;

//int main() {
//	short* p = new short[100];
//	cout << p << endl;
//	delete[] p;
//	p = NULL;
//	cout << p << endl;
//	delete[] p;
//	p = NULL;
//
//	return 0;
//}


//int main() {
//	int* p = new int;
//	*p = 486;
//	cout << *p << endl;
//	
//	delete p;
//	// delete ���ϰ� �Ǹ� �޸� ������ �߻��ϰ� �ȴ�
//	//�����ϰ� �� �����ϸ� �ȵȴ�
//
//	return 0;
//}


//int main() {
//
//	int* p;
//	int length, total = 0;
//	double average;
//	cin >> length;
//	p = new int[length]; //���� �޸� �Ҵ�
//	
//	for (auto i = 0; i < length; i++) {
//		cin >> p[i];
//		//cin >> *(p + i);
//	}
//
//	for (auto i = 0; i < length; i++) {
//		total += p[i];
//	}
//
//	average = total / (double)length;
//	cout << total << '\n';
//	cout << average << '\n';
//
//	delete[] p; //����� �޸� ����
//
//	return 0;
//}