#include "docWriter.h"
#include <iostream>
#include <fstream> //���� �����
using namespace std;

DocWriter::DocWriter() :fileName("noName.txt"), contents("�ù�") {
}
DocWriter::DocWriter(const string& fileName, const string& contents) {
	this->fileName = fileName;
	this->contents = contents;
}
DocWriter::~DocWriter() {

}

void DocWriter::setFileName(const string& fileName) {
	this->fileName = fileName;
}
void DocWriter::setContents(const string& contents) {
	this->contents = contents;
}
void DocWriter::Write() {
	ofstream of(fileName);
	//ofstream of;
	//of.open(fileName);
	of << "============���� ���� ===========\n\n";
	of << contents;
}