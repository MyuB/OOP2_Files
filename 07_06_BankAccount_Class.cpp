#include <iostream>
#include <cassert>
using namespace std;

class Account {
private:
	long accNum;
	double balance;
	static int base;
public:
	Account(double bal);
	~Account();
	void checkBalance() const;
	void deposit(double amount);
	void withdraw(double amount);
};
int Account::base = 0;
Account::Account(double bal)
	:balance(bal) {
	if (bal < 0.0) {
		cout << "ÀÜ¾× À½¼ö x" << '\n';
		assert(false);
	}
	base++;
	accNum = 10000 + base;

	cout << "°èÁÂ_#" << accNum << "ÀÌ ¸¸µé¾îÁü" << '\n';
	cout << "ÀÜ¾×_$" << balance << "\n\n";
}
Account::~Account() {
	cout << "°èÁÂ_#" << accNum << "°¡ ´ÝÈû" << '\n';
	cout << "ÀÜ¾×_$" << balance << "¸¦ °í°´¿¡°Ô º¸³¿" << "\n\n";
}
void Account::checkBalance() const {
	cout << "°èÁÂ_#" << accNum <<  '\n';
	cout << "transaction - checkBalance" << '\n';
	cout << "ÀÜ¾×_$" << balance <<  "\n\n";
}
void Account::deposit(double amount) {
	if (amount > 0.0) {
		balance += amount;
		cout << "°èÁÂ_#" << accNum << '\n';
		cout << "transaction - deposit of $" << amount << '\n';
		cout << "º¯°æµÈ ÀÜ¾×_$" << balance << "\n\n";
	}
	else {
		cout << "transaction terminated" << '\n';
	}
}
void Account::withdraw(double amount) {
	if (amount > balance){
		amount = balance;
	}
	balance -= amount;
	cout << "°èÁÂ_#" << accNum << '\n';
	cout << "transaction - withdrawal $" << amount << '\n';
	cout << "º¯°æµÈ ÀÜ¾×_$" << balance << "\n\n";
}

int main() {
	Account acc1(1000);
	Account acc2(2000);
	Account acc3(3000);

	acc1.deposit(150);
	acc2.checkBalance();
	acc1.checkBalance();
	acc3.withdraw(800);
	acc2.withdraw(1000);
	acc2.deposit(120);

	return 0;
}