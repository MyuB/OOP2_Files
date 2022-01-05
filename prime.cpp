#include <iostream>
using namespace std;

int main() {

    int a, total = 0;
    cin >> a;
    int list[1000];
    for (int i = 0; i < a; i++) {
        cin >> list[i];
        int count = 0;
        for (int k = 1; k <= list[i]; k++) {
            if (list[i] % k == 0) {
                count++;
            }
        }
        if (count == 2) {
            total++;
        }
    }
    cout << total << endl;

    return 0;
}