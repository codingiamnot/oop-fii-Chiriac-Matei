#include <iostream>
#include "Sort.h"

using namespace std;

int main()
{
	Sort s = Sort({1, 5, 2, 7, 10, 100, 50});
	s.QuickSort(true);
	s.Print();



	return 0;
}