#include <iostream>
#include <random>
#include <map>
#include <fstream>
using namespace std;

int main() {

	random_device rd;
	mt19937_64 gen(rd());
	normal_distribution<double> distribution(50, 10);

	map<double, double> m;
	for (int n = 0; n < 10000000; n++) {
		double rnd = distribution(gen);
		++(m[std::round(rnd)]);
	}

	ofstream a("normd.csv");

	for (auto &p : m) {
		a << p.first << "," << p.second << '\n';
	}

	return 0;
}
