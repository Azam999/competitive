#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("breedflip.in");
ofstream fout("breedflip.out");

// Convert the input into an array of 0s and 1s
// 1 means that the point is different, 0 means the point is the same
// Num times machine applied: number of consecutive 1s

int main()
{
    int N = 1;
    fin >> N;

    bool machine[N];

    for (int i = 0; i < N; i++)
    {
        machine[i] = 0;
    }

    string a;
    fin >> a;

    string b;
    fin >> b;

    int count = 0;

    // Change different values to 1
    for (int i = 0; i < N; i++)
    {
        if (a[i] != b[i])
        {
            machine[i] = 1;
        }
    }

    int consecutive_count = 0;

    // Example: 101100010

    // Find the number of consecutive 1s
    for (int i = 0; i < N; i++)
    {
        if (machine[i] == 1)
        {
            // Check for isolated 1s

            // If first element and next element is 0
            if (i == 0 && machine[i + 1] == 0)
            {
                count++;
            }
            // If last element and previous element is 0
            else if (i == N - 1 && machine[i - 1] == 0)
            {
                count++;
            }
            else if (machine[i - 1] == 0 && machine[i + 1] == 0)
            {
                count++;
            }
            // Check for consecutive 1s
            // Start consecutive count
            else if (machine[i - 1] == 0 || (machine[i + 1] == 1 && machine[i - 1] == 1))
            {
                consecutive_count++;
            }
            // Last consecutive 1
            else if (machine[i - 1] == 1 && machine[i + 1] == 0)
            {
                consecutive_count++;
                if (consecutive_count > 0)
                {
                    count += 1;
                    consecutive_count = 0;
                }
            }
        }
    }

    fout << count << endl;

    return 0;
}