#include "Student.h"
#include <string>


void Student::Init(std::string s, float a, float b, float c)
{
	this->name = s;
	this->math = a;
	this->eng = b;
	this->hist = c;
}

float Student::getMath() { return this->math; }
float Student::getEng() { return this->eng; }
float Student::getHist() { return this->hist; }
std::string Student::getName() { return this->name; }

void Student::setMath(float x) { this->math = x; }
void Student::setEng(float x) { this->eng = x; }
void Student::setHist(float x) { this->hist = x; }
void Student::setName(std::string s) { this->name = s; }

float Student::getAverage()
{
	return (this->math + this->eng + this->hist) / 3;
}

