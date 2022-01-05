#include <iostream> 
#include <vector> 
using namespace std; 
vector<int> Eratosthenes(int n) { 
	bool ary[100];  
	for (int i = 0; i < n; i++) 
		ary[i] = false; 
	ary[0] = ary[1] = true; // 0�� 1�� �Ҽ��� �ƴ� 
	vector<int> prime; 
	for (int i = 2; i < n; i++) { 
		if (ary[i]) continue; 
		// �Ҽ��� �ƴϸ� continue 
		prime.push_back(i); // �Ҽ���� ����Ʈ�� �ִ´�. // i���� ū i�� ����� ���� 
		for (int j = i * 2; j < n; j += i) 
			ary[j] = true; } 
	return prime; } 

int main() { 
	vector<int> prime = Eratosthenes(100); 
	for (auto x : prime) 
		cout << x << ' ';
 }
