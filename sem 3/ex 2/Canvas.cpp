#include "Canvas.h"
#include <math.h>
#include <iostream>

using namespace std;

const long double eps = 0.5;

Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->height = height;

	this->Clear();
}

void Canvas::Clear()
{
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			this->val[i][j] = 32;
}

void Canvas::Print()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
			cout << this->val[i][j];
		cout << '\n';
	}
}

void Canvas::SetPoint(int i, int j, char ch)
{
	this->val[i][j] = ch;
}

void Canvas::DrawCircle(int x, int y, int r, char ch)
{
	for(int i=0; i<height; i++)
		for (int j = 0; j < height; j++)
		{
			long double dist = (i - x) * (i - x) + (j - y) * (j - y);
			dist = sqrt(dist);

			if(abs(dist - (long double)r) <= eps)
				this->val[i][j] = ch;
		}
}

void Canvas::FillCircle(int x, int y, int r, char ch)
{
	for (int i = 0; i < height; i++)
		for (int j = 0; j < height; j++)
		{
			long double dist = (i - x) * (i - x) + (j - y) * (j - y);
			dist = sqrt(dist);

			if ( (long double)r - dist >= -eps)
				this->val[i][j] = ch;
		}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = 0; i < height; i++)
		for (int j = 0; j < height; j++)
		{
			if ((i == top || i == bottom) && (j == left || j == right))
				this->val[i][j] = ch;
		}
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = min(bottom, top); i <= max(bottom, top); i++)
		for (int j = left; j <= right; j++)
			this->val[i][j] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	if (x1 == x2)
	{
		for (int j = min(y1, y2); j <= max(y1, y2); j++)
			this->val[x1][j] = ch;

		return;
	}

	long double m = (long double)(y2 - y1) / (long double)(x2 - x1);
	long double c = (long double)y1 - (long double)x1 * m;

	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
		{
			long long eY = m * (long double)i + c;

			if (abs(eY - (long double)j) <= eps && i >= min(x1, x2) && i <= max(x1, x2))
				this->val[i][j] = ch;
		}
}