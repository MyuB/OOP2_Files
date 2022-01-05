#include <iostream>
#include <random>
#include <string>
#include <iomanip>
#define endl '\n'
using namespace std;

class Player {
private:
	int id;
	string name;
	bool status;
public:
	Player();
	void setId(int id);
	void setName(string n);
	void setStatus(bool a);
	int getId() const;
	string getName() const;
	bool getStatus() const;
};
Player::Player() {
	this->status = true;
}
void Player::setId(int id) {
	this->id = id;
}
void Player::setName(string n) {
	this->name = n;
}
void Player::setStatus(bool s) {
	this->status = s;
}
int Player::getId() const{
	return this->id;
}
string Player::getName() const {
	return this->name;
}
bool Player::getStatus() const {
	return this->status;
}
string nameArr[25] = {
	"abc", "bcd", "cde", "def", "efg",
	"fgh", "ghi", "hij", "ijk", "jkl",
	"klm", "lmn", "mno", "nop", "opq",
	"pqr", "qrs", "rst", "stu", "tuv",
	"uvw", "vwx", "wxy", "xyz", "yza"
};

int main() {

	random_device rd;
	mt19937_64 gen(rd());
	uniform_int_distribution<int> distribution(1, 25);
	uniform_int_distribution<int> d(2, 7);

	Player p[25];

	bool* check_arr = new bool[25];
	for (int i = 0; i < 25; i++) {
		check_arr[i] = false;
	}

	int i = 0;
	while (i != 25) {
		int n = distribution(gen) - 1;
		if (check_arr[n])
			continue;
		check_arr[n] = true;
		p[i].setId(n);
		p[i].setName(nameArr[i]);
		i++;
	}

	delete[] check_arr;

	cout << "=====================Game Start========================" << endl;

	auto calcCurrentPlayer = [=](Player* p)->int {
		int cnt = 0;
		for (int i = 0; i < 25; i++) {
			if (p[i].getStatus() == false) cnt++;
		}
		return cnt;
	};

	auto printCurrentInfo = [=](int temp)->void {
		cout << endl;
		cout << "=================== 참가인원: " << 25 - temp << " ======================" << endl;

		cout << "=================== 총 상금: " << temp << "억원 " << "=====================" << endl;
	};

	auto printParticipant = [&]()->void{
		int i = 0;
		while (i != 25) {
			if (i != 0 && i % 5 == 0)
				cout << endl;
			cout << setw(2) << p[i].getId() << ": " << setw(4) << p[i].getName() << " | ";
			i++;
		}
	};

	int temp = calcCurrentPlayer(p);
	printParticipant();
	cout << endl;
	printCurrentInfo(temp);

	cout << "I. 주사위 게임: (2~7) ";
	int dice = d(gen);
	cout << dice << endl;
	for (int i = 0; i < 25; i++) {
		if (p[i].getId() % dice == 0) {
			p[i].setStatus(false);
			p[i].setName("탈락");
		}
	}

	temp = calcCurrentPlayer(p);
	printParticipant();
	cout << endl;
	printCurrentInfo(temp);

	cout << "2. 소수 게임: 합성수 or 소수 ";
	cout << "1. 소수, 2. 합성수 중에 선택하세요: ";
	int choose;
	cin >> choose;
	while (true) {
		if (choose == 1 || choose == 2)
			break;
		else {
			cout << "메뉴에서 고르세요: ";
			cin >> choose;
		}
	}

	auto is_prime = [=](int num)->bool {
		if (num == 1) return false;
		if (num == 2) return true;
		for (int i = 2; i <= sqrt(num); i++) {
			if (num % i == 0) return false;
		}

		return true;
	};

	auto prime = [&]()->void {
		for (int i = 0; i < 25; i++) {
			if (is_prime(p[i].getId())) {
				p[i].setStatus(false);
				p[i].setName("탈락");
			}
		}
	};

	auto not_prime = [&]()->void {
		for (int i = 0; i < 25; i++) {
			if (p[i].getId() == 1) continue;
			if (!is_prime(p[i].getId())) {
				p[i].setStatus(false);
				p[i].setName("탈락");
			}
		}
	};

	switch (choose)
	{
	case 1:
		prime();
		break;
	case 2:;
		not_prime();
		break;
	default:
		break;
	}

	temp = calcCurrentPlayer(p);
	printParticipant();
	cout << endl;
	printCurrentInfo(temp);

	cout << "III. 제비뽑기 ";
	int last = distribution(gen);
	int temp_idx = 0;
	while (true) {
		for (int i = 0; i < 25; i++) {
			if (p[i].getId() == last) {
				if (p[i].getStatus() == true) {
					temp_idx = i;
					break;
				}
				else {
					temp_idx = i;
					break;
				}
			}
		}
		if (p[temp_idx].getStatus() == true) break;
		else {
			last = distribution(gen);
			continue;
		}
	}
	cout << last << endl;

	[&](int last)->void {
		for (int i = 0; i < 25; i++) {
			if (p[i].getStatus() == false) continue;
			if (p[i].getId() != last) {
				p[i].setStatus(false);
				p[i].setName("탈락");
			}
			else continue;
		}
	}(last);

	temp = calcCurrentPlayer(p);
	printParticipant();
	cout << endl << "최종 우승자: " << p[temp_idx].getId() << " " << p[temp_idx].getName() << endl;
	printCurrentInfo(temp);

	return 0;
}