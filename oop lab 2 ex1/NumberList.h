#pragma once

class NumberList
{
	int* numbers;
	int count, maxSize;

public:

	void Init();

	void Realloc();
	bool Add(int x);

	void Sort();
	void Print();
};
