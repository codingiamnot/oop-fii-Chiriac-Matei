#include "NumberList.h"
#include <algorithm>

void NumberList::Init()
{
	this->count = 0;
	this->maxSize = 4;

	this->numbers = new int[this->maxSize];
}

void NumberList::Realloc()
{
	this->maxSize *= 2;

	int* tmp = new int[this->maxSize];

	for (int i = 0; i < this->count; i++)
		tmp[i] = this->numbers[i];

	delete[] this->numbers;
	this->numbers = tmp;
}

bool NumberList::Add(int x)
{
	if (this->count == this->maxSize)
		this->Realloc();

	this->count++;
	this->numbers[this->count - 1] = x;

	return true;
}

void NumberList::Sort()
{
	std::sort(this->numbers, this->numbers + this->count);
}

void NumberList::Print()
{
	for (int i = 0; i < this->count; i++)
		std::printf("%d ", this->numbers[i]);

	std::printf("%c", '\n');
	
}