#pragma once

#include "Student.h"
#include <vector>

int compName(Student a, Student b);
int compMath(Student a, Student b);
int compEng(Student a, Student b);
int compHist(Student a, Student b);
int compAvg(Student a, Student b);

void sortareAvg(std::vector<Student> &v);