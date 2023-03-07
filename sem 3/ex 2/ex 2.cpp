#include <iostream>
#include "Canvas.h"

using namespace std;

int main()
{
	Canvas mat = Canvas(50, 50);
	mat.DrawCircle(10, 10, 6, '#');
	mat.Print();

	return 0;
}