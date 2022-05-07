#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{

    // largest number = A + B + C
    // smallest number is A unless it is repeated

    int A, B, C;

    int arr[7];
    int max = 0;
    int min = INT_MAX;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
            A = min;
        }
    }

    bool done = false;
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == min)
        {
            if (count > 0)
            {
                B = min;
                C = max - (A + B);
                done = true;
                break;
            }
            count++;
        }
    }

    if (!done)
    {
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] == min)
            {
                arr[i] = max;
            }
        }
        min = INT_MAX;
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        B = min;
        C = max - (A + B);
    }

    cout << A << " " << B << " " << C << endl;

    return 0;
}
