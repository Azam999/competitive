#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

ifstream fin("swap.in");
ofstream fout("swap.out");

int n, k, a1, a2, b1, b2, numbers[101], original[101];

bool equalArrays(int a[], int b[])
{
    bool equal = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            equal = false;
        }
    }
    return equal;
}

int main()
{
    fin >> n >> k >> a1 >> a2 >> b1 >> b2;

    for (int i = 0; i < n; i++)
    {
        numbers[i] = i + 1;
        original[i] = i + 1;
    }

    for (int i = 0; i < k; i++)
    {
        reverse(numbers + a1 - 1, numbers + a2);
        reverse(numbers + b1 - 1, numbers + b2);

        if (equalArrays(numbers, original))
        {
            // use remainder to limit number of repeats
            for (int l = 0; l < k % (i+1); l++)
            {
                reverse(numbers + a1 - 1, numbers + a2);
                reverse(numbers + b1 - 1, numbers + b2);
            }
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        fout << numbers[i] << endl;
    }

    return 0;
}