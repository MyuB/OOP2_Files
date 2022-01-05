#pragma once
#include "docWriter.h"

//chid, sub, derived      parent, super, base
class HTMLWriter : public DocWriter{ //cpp 에서의 상속 문법
private:
	string fontName;
	int fontSize;
	string fontColor;
public:
	HTMLWriter();
	HTMLWriter(const string& fileName, const string& contents);
	~HTMLWriter();

	void setFont(const string& fontName, const int& fontSize, const string& fontColor);
	void Write(); // override 부모의 멤버함수를 재정의 해서 사용함
};