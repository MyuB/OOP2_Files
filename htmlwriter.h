#pragma once
#include "docWriter.h"

//chid, sub, derived      parent, super, base
class HTMLWriter : public DocWriter{ //cpp ������ ��� ����
private:
	string fontName;
	int fontSize;
	string fontColor;
public:
	HTMLWriter();
	HTMLWriter(const string& fileName, const string& contents);
	~HTMLWriter();

	void setFont(const string& fontName, const int& fontSize, const string& fontColor);
	void Write(); // override �θ��� ����Լ��� ������ �ؼ� �����
};