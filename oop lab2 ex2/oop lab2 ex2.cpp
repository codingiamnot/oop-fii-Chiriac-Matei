// oop lab2 ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Student.h"
#include "CompStudent.h"

#include <vector>



int main()
{
	Student a;
	a.Init("adia", 10, 9, 8);

	Student b;
	b.Init("ovidiu", 8, 9, 10);


	//printf("%d", compAvg(a, b));


	std::vector<Student> v;
	v.push_back(a);
	v.push_back(b);

	sortareAvg(v);

	for (Student x : v)
		printf("%f ", x.getAverage());
}
