#include "Student.h"
#include "CompStudent.h"
#include <algorithm>
#include <vector>

int compName(Student a, Student b)
{
	if (a.getName() == b.getName() )
		return 0;

	if (a.getName() < b.getName())
		return -1;

	return 1;
}


int compMath(Student a, Student b)
{
	if (a.getMath() == b.getMath())
		return 0;

	if (a.getMath() < b.getMath())
		return -1;

	return 1;
}

int compEng(Student a, Student b)
{
	if (a.getEng() == b.getEng())
		return 0;

	if (a.getEng() < b.getEng())
		return -1;

	return 1;
}

int compHist(Student a, Student b)
{
	if (a.getHist() == b.getHist())
		return 0;

	if (a.getHist() < b.getHist())
		return -1;

	return 1;
}


int compAvg(Student a, Student b)
{
	if (a.getAverage() == b.getAverage())
		return 0;

	if (a.getAverage() < b.getAverage())
		return -1;

	return 1;
}


bool funcAux(Student a, Student b)
{
	return compAvg(a, b) == -1;
}

void sortareAvg(std::vector<Student> &v)
{
	sort(v.begin(), v.end(), funcAux);
}