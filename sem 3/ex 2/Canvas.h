#pragma once

class Canvas
{

private:

	int width, height;
	char val[505][505];

public:

	Canvas(int width, int height);
	void DrawCircle(int x, int y, int r, char ch);
	void FillCircle(int x, int y, int r, char ch);

	void DrawRect(int left, int top, int right, int bottom, char ch);
	void FillRect(int left, int top, int right, int bottom, char ch);

	void SetPoint(int x, int y, char ch);
	void DrawLine(int x1, int y1, int x2, int y2, char ch);

	void Print();
	void Clear();
};