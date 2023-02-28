#pragma once

#include <string>

class Student
{
	float math, eng, hist;
	std::string name;

public:
	
	void Init(std::string s, float a, float b, float c);

	void setName(std::string aux);
	std::string getName();

	void setMath(float x);
	float getMath();

	void setEng(float x);
	float getEng();

	void setHist(float x);
	float getHist();

	float getAverage();
};