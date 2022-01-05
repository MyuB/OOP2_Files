#pragma once
#include <string>
using namespace std;

class DocWriter {
protected:
	string fileName;
	string contents;
public:
	DocWriter();
	DocWriter(const string& fileName, const string& contents);
	~DocWriter();

	void setFileName(const string& fileName);
	void setContents(const string& contents);
	void Write();
};

