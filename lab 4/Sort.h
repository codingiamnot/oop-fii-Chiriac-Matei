#pragma once
#include <initializer_list>
#include <string>

using namespace std;

class Sort
{
private:
	int cnt;
	int *v;

public:
	
	Sort(int n, int min, int max);
	Sort(initializer_list<int> l);
	Sort(int aux[], int n);
	Sort(int n, ...);
	Sort(string s);

	void InsertSort(bool ascendent = false);
	void QuickSort(bool ascendent = false);
	void BubbleSort(bool ascendent = false);

	void Print();

	int getElementsCount();
	int GetElementFromIndex(int index);
};