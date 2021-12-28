#include <iostream>
using namespace std;


struct Rectangle {
	int x, y;
	int w, h;
};

int main() {

	Rectangle r = { 15, 10, 50, 70 };
	Rectangle* pr = &r;

	cout << r.x << " " << (*pr).x << endl;
	cout << (*pr).y << " " << pr->y << endl;
	cout << (*pr).h << " " << pr->h << endl;
	pr->h = 40;
	(*pr).w = 100;
	cout << (*pr).h << " " << pr->h << endl;
	cout << (*pr).w << " " << pr->w << endl;

	return 0;
}

//struct Student {
//	int id;			//4
//	char name[20];  //20
//	float grade[2]; //8
//};
//
//int main() {
//
//	Student sInfos[4] = {
//		{202001, "lee", {4.3f, 4.1f}},
//		{202002, "kim", {3.3f, 3.1f}},
//		{202003, "choi", {2.3f, 2.1f}},
//		{202004, "park", {1.3f, 1.1f}}
//	};
//
//	for (int i = 0; i < 4; i++) {
//		cout << sInfos[i].id << " " << sInfos[i].name << " " << sInfos[i].grade[0] << " " << sInfos[i].grade[1] << "\n";
//	}
//
//
//	return 0;
//}