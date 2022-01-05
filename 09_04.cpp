#include "docWriter.h"
#include "htmlwriter.h"
using namespace std;

int main() {

	DocWriter dw1, dw2("README.txt", "this is fstream");
	dw1.Write();
	dw2.Write();

	HTMLWriter hw1;
	HTMLWriter hw2("test.html", "hello html");
	hw1.Write();
	hw2.Write();

	return 0;
}