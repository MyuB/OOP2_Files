#include <iostream>
#include <random>
using namespace std;

int main() {
	//�̰� ��� ��Ÿ��
	random_device rd; //seed
	mt19937 gen(rd()); //seed object ��ü ����
	uniform_int_distribution<int> distrib(1, 6); //�յ� ����
	
	for (int i = 0; i < 10; i++) {
		cout << distrib(gen) << " ";
	}
	cout << '\n';

	int x, y;
	//������ �ִ�! �ֳĸ� �ᱹ rand ǥ�� �����ؼ� ����
	//�ð��� ���� �����ϴ� ���̱� ������ ��Ȯ�� �ǹ��� random�� �ƴϴ�
	srand(time(0));
	x = rand() % 6 + 1;
	y = rand() % 6 + 1;
	cout << "x��" <<  x << " y��" << y << '\n';

	return 0;
}