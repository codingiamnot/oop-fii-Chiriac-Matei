#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
	cout << Math::Add(3, 4)<<'\n';
	cout << Math::Mul(3.2, 5.8)<<'\n';

	cout << Math::Add(3, 5, 6)<<'\n';


	char a[] = "seminar ";
	char b[] = "3";

	cout << Math::Add(a, b);
	return 0;
}