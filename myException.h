#pragma once
class MyException {
public:
	const void* sender; //예외를 throw한 객체의 주소
	const char* description; //예외에 대한 설명
	int info;

	MyException(const void* sender, const char* description, int info) {
		this->sender = sender;
		this->description = description;
		this->info = info;
	}
};