#include "Math.h"
#include <cstring>
#include <cstdarg>

int Math::Add(int x, int y) { return x + y; }
int Math::Add(int x, int y, int z) { return x + y + z; }

int Math::Add(double x, double y) { return x + y; }
int Math::Add(double x, double y, double z) { return x + y + z; }

int Math::Mul(int x, int y) { return x * y; }
int Math::Mul(int x, int y, int z) { return x * y * z; }

int Math::Mul(double x, double y) { return x * y; }
int Math::Mul(double x, double y, double z) { return x * y * z; }

int Math::Add(int count, ...)
{
	int ans = 0;
	va_list args;
	va_start(args, count);

	for (int i = 0; i < count; i++)
		ans += va_arg(args, int);
	
	va_end(args);
	return ans;
}

char* Math::Add(const char* a, const char* b)
{
	if (a == nullptr || b == nullptr)
		return nullptr;

	int n1 = strlen(a);
	int n2 = strlen(b);

	char* ans = new char[n1 + n2 + 1];

	for (int i = 0; i < n1; i++)
		ans[i] = a[i];

	for (int i = 0; i < n2; i++)
		ans[i + n1] = b[i];

	ans[n1 + n2] = 0;
	return ans;
}
