#include <iostream>
#include <random>
#include <stdarg.h>
#include "Sort.h"

using namespace std;

mt19937 rng;

Sort::Sort(int n, int min, int max)
{
	this->cnt = n;
	this->v = new int[n];

	for (int i = 0; i < n; i++)
		this->v[i] = (rng() % (max - min + 1)) + min;
}

Sort::Sort(initializer_list<int> l)
{
	this->cnt = (int)l.size();
	this->v = new int[this->cnt];


	auto it = l.begin();

	for (int i = 0; i < this->cnt; i++)
	{
		this->v[i] = *it;
		it++;
	}
}

Sort::Sort(int aux[], int n)
{
	this->cnt = n;
	this->v = new int[n];

	for (int i = 0; i < n; i++)
		this->v[i] = aux[i];
}

Sort::Sort(int n, ...)
{
	this->cnt = n;
	this->v = new int[n];

	va_list aux;
	va_start(aux, n);

	for (int i = 0; i < n; i++)
		this->v[i] = va_arg(aux, int);

	va_end(aux);
}

Sort::Sort(string s)
{
	this->cnt = 1;
	for (int i = 0; i < (int)s.size(); i++)
		if (s[i] == ',')
			this->cnt++;


	this->v = new int[this->cnt];

	int x = 0;
	int poz = 0;

	for (int i = 0; i < (int)s.size(); i++)
	{
		if (s[i] == ',')
		{
			this->v[poz] = x;
			poz++;
			x = 0;
		}
		else
		{
			x = x * 10 + s[i] - '0';
		}
	}

	this->v[poz] = x;
}


void Sort::Print()
{
	for (int i = 0; i < this->cnt; i++)
		cout << this->v[i] << ' ';
	cout << '\n';
}

int Sort::getElementsCount()
{
	return this->cnt;
}

int Sort::GetElementFromIndex(int index)
{
	return this->v[index];
}


void Sort::BubbleSort(bool ascendent)
{
	if (!ascendent)
	{
		for (int i = 0; i < this->cnt; i++)
			this->v[i] *= -1;
	}

	for (int i = 0; i < this->cnt; i++)
	{
		for (int j = 0; j < this->cnt; j++)
		{
			if (this->v[i] > this->v[j])
				swap(this->v[i], this->v[j]);
		}
	}

	if (!ascendent)
	{
		for (int i = 0; i < this->cnt; i++)
			this->v[i] *= -1;
	}
}


void Sort::InsertSort(bool ascendent)
{
	if (!ascendent)
	{
		for (int i = 0; i < this->cnt; i++)
			this->v[i] *= -1;
	}

	for (int i = 1; i < this->cnt; i++)
	{
		int p = i;
		while (p > 1 && this->v[p] > this->v[p - 1])
		{
			swap(this->v[p - 1], this->v[p]);
			p--;
		}
	}


	if (!ascendent)
	{
		for (int i = 0; i < this->cnt; i++)
			this->v[i] *= -1;
	}
}


void quickSort(int* v, int n)
{
	if (n <= 1)
		return;


	bool same = true;

	for (int i = 0; i < n; i++)
		if (v[i] != v[0])
			same = false;

	if (same)
		return;


	int p = (rng() % (n + 1));
	int root = v[p];

	vector<int> sml, big;

	for (int i = 0; i < n; i++)
	{
		if (v[i] <= v[p])
			sml.push_back(v[i]);
		else
			big.push_back(v[i]);
	}

	for (int i = 0; i < (int)sml.size(); i++)
		v[i] = sml[i];

	for (int i = 0; i < (int)big.size(); i++)
		v[i + (int)sml.size()] = big[i];

	quickSort(v, (int)sml.size());
	quickSort(v + (int)sml.size(), (int)big.size());
}


void Sort::QuickSort(bool ascendent)
{
	if (!ascendent)
	{
		for (int i = 0; i < this->cnt; i++)
			this->v[i] *= -1;
	}

	quickSort(this->v, this->cnt);

	if (!ascendent)
	{
		for (int i = 0; i < this->cnt; i++)
			this->v[i] *= -1;
	}
}