#include <iostream> 
#include <vector> 
using namespace std; 
vector<int> Eratosthenes(int n) { 
	bool ary[100];  
	for (int i = 0; i < n; i++) 
		ary[i] = false; 
	ary[0] = ary[1] = true; // 0과 1은 소수가 아님 
	vector<int> prime; 
	for (int i = 2; i < n; i++) { 
		if (ary[i]) continue; 
		// 소수가 아니면 continue 
		prime.push_back(i); // 소수라면 리스트에 넣는다. // i보다 큰 i의 배수를 제외 
		for (int j = i * 2; j < n; j += i) 
			ary[j] = true; } 
	return prime; } 

int main() { 
	vector<int> prime = Eratosthenes(100); 
	for (auto x : prime) 
		cout << x << ' ';
 }
