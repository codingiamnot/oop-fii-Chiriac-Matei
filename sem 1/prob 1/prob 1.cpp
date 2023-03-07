#include <fstream>


using namespace std;

int main()
{
	FILE *input;
	input = fopen("input.txt", "r");

	long long sum = 0;
	long long x = 0;

	while (true)
	{
		char c = fgetc(input);

		if (feof(input))
			break;

		if (c == '\n')
		{
			sum += x;
			x = 0;
		}
		else
			x = x * 10 + c - '0';
	}

	if (x)
		sum += x;

	printf("%lld", sum);

	fclose(input);
	return 0;
}