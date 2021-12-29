#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int semester;
    cin >> semester;
    for (int i = 0; i < semester; i++) {
        int course = 0;
        cin >> course;
        int t_credit = 0;
        float a = 0;
        float GPA = 0;
        for (int k = 0; k < course; k++) {
            int credit = 0;
            float score = 0;
            cin >> credit >> score;
            t_credit += credit;
            a += (credit * score);
        }
        cout << t_credit << endl;
        cout.precision(2);
        GPA = a / t_credit;
        cout << GPA << endl;
    }
    return 0;
}