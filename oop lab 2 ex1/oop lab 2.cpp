
// oop lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "NumberList.h"

int main()
{
    NumberList vec;
    vec.Init();

    vec.Add(3);
    vec.Add(1);
    vec.Add(2);
    vec.Add(5);
    vec.Add(6);
    vec.Add(10);


    vec.Sort();

    vec.Print();
}

