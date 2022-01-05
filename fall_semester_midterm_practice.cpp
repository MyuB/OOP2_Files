#include <iostream>
#include <random>
#include <string>
#include <iomanip>
using namespace std;

struct participant {
	int id;
	string name;
	bool status;
};

bool check_arr[25] = { false, };
string nameArr[25] = {
	"a", "b", "c", "d", "e",
	"f", "g", "h", "i", "j",
	"k", "l", "m", "n", "o",
	"p", "q", "r", "s", "t",
	"u", "v", "w", "x", "y"
};

void printParticipant(participant* Student) {
	int i = 0;
	while (i != 25) {
		if (i != 0 && i % 5 == 0)
			cout << endl;
		cout << setw(2) << Student[i].id << ": " << setw(4) << Student[i].name << " | ";
		i++;
	}
}

void printCurrentInfo(int num) {
	cout << '\n';
	cout << "=================== �����ο�: " << 25 - num << " ======================" << '\n';

	cout << "=================== �� ���: " << num << "��� " << "=====================" << '\n';
}

int pCount(participant *Student) {
	int pCount = 0;
	for (int i = 0; i < 25; i++) {
		if (Student[i].status == false)
			pCount++;
	}
	return pCount;
}

bool is_prime(int num) {
	if (num == 1) return false;
	if (num == 2) return true;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}

	return true;
}

void prime(participant* Student) {
	for (int i = 0; i < 25; i++) {
		if (is_prime(Student[i].id)) {
			Student[i].status = false;
			Student[i].name = "Ż��";
		}
	}
}

void not_prime(participant* Student) {
	for (int i = 0; i < 25; i++) {
		if (!is_prime(Student[i].id)) {
			Student[i].status = false;
			Student[i].name = "Ż��";
		}
	}
}

int main() {

	random_device rd;
	mt19937_64 gen(rd());
	uniform_int_distribution<int> distribution(1, 25);
	uniform_int_distribution<int> d(2, 7);

	participant Student[25];

	int i = 0;
	while (i != 25) {
		int n = distribution(gen);
		if (check_arr[n])
			continue;
		check_arr[n] = true;
		Student[i].id = n;
		Student[i].status = true;
		Student[i].name = nameArr[i];
		i++;
	}

	cout << "=====================Game Start========================" << '\n';
	participant* p = Student;
	printParticipant(p);
	int temp_participant = pCount(p);
	cout << '\n';
	printCurrentInfo(temp_participant);

	cout << "I. �ֻ��� ����: (2~7) ";
	int dice = d(gen);
	cout << dice << '\n';
	for (int i = 0; i < 25; i++) {
		if (Student[i].id % (dice) == 0) {
			Student[i].status = false;
			Student[i].name = "Ż��";
		}
	}
	printParticipant(p);
	temp_participant = pCount(p);
	cout << '\n';
	printCurrentInfo(temp_participant);

	cout << "2. �Ҽ� ����: �ռ��� or �Ҽ� ";
	cout << "1. �Ҽ�, 2. �ռ��� �߿� �����ϼ���: ";
	int choose;
	cin >> choose;
	while (true) {
		if (choose == 1 || choose == 2)
			break;
		else {
			cout << "�޴����� ������: ";
			cin >> choose;
		}
	}

	switch (choose)
	{
	case 1:
		prime(p);
		break;
	case 2:;
		not_prime(p);
		break;
	default:
		break;
	}
	printParticipant(p);
	temp_participant = pCount(p);
	cout << '\n';
	printCurrentInfo(temp_participant);

	//�̴� �Ϳ� ���� ���� ó���� �߸��ߴ�
	cout << "III. ����̱� ";
	int last = distribution(gen);
	int temp_idx = 0;
	while (true) {
		for (int i = 0; i < 25; i++) {
			if (Student[i].id == last && Student[i].status == true) {
				temp_idx = i;
				break;
			}
		}
		if (Student[temp_idx].status == true) break;
		else {
			last = distribution(gen);
			continue;
		}
	}
	cout << last << endl;

	[&](int last)->void {
		for (int i = 0; i < 25; i++) {
			if (Student[i].status == false) continue;
			if (Student[i].id != last) {
				Student[i].status = false;
				Student[i].name = "Ż��";
			}
			else continue;
		}
	}(last);

	printParticipant(p);
	cout << '\n' << "���� �����: " << Student[temp_idx].id << " " << Student[temp_idx].name << '\n';
	printCurrentInfo(pCount(p));

	return 0;
}