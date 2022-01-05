#include "docWriter.h"
#include <iostream>
#include <fstream> //파일 입출력
using namespace std;

DocWriter::DocWriter() :fileName("noName.txt"), contents("냉무") {
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
	of << "============문서 내용 ===========\n\n";
	of << contents;
}