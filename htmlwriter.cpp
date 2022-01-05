#include "htmlwriter.h"
#include <fstream>

HTMLWriter::HTMLWriter() {
	fileName = "NoName.html";
	contents = "<h1>³Ã¹«</h1>";
	fontName = "±¼¸²";
	fontSize = 3;
	fontColor = "black";
}
HTMLWriter::HTMLWriter(const string& fileName, const string& contents) :DocWriter(fileName, contents) {
	fontName = "Arial";
	fontSize = 30;
	fontColor = "black";
}
HTMLWriter::~HTMLWriter() {

}

void HTMLWriter::setFont(const string& fontName, const int& fontSize, const string& fontColor) {
	this->fontName = fontName;
	this->fontSize = fontSize;
	this->fontColor = fontColor;
}
//override
void HTMLWriter::Write() {
	ofstream of(fileName);
	of << "<html><head><title>OOP2 INHERITANCE</title></head>";
	of << "<body>";
	of << "<font name='" << fontName << "' size='" << fontSize << "' color='" << fontColor << "'";
	of << ">";
	of << contents;
	of << "</font></body></html>";
}