#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char s[505];
vector<char*> v;

bool comp(char* a, char* b)
{
    int n1 = strlen(a);
    int n2 = strlen(b);

    for (int i = 0; i < min(n1, n2); i++)
    {
        if (a[i] < b[i])
            return true;

        if (b[i] < a[i])
            return false;
    }

    return n1 < n2;
}

int main()
{
    char aux[505];

    while (scanf("%s", aux))
    {
        char* p = new char[strlen(aux)];
        strcpy(p, aux);

        if (p[0] == '.')
            break;

        v.push_back(p);
    }

    sort(v.begin(), v.end(), comp);

    for (auto it : v)
        printf("%s\n", it);


    return 0;
}
