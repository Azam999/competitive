#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int N;
  cin >> N;
  int arr[N][N];

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> arr[i][j];
    }
  }

  int sum1 = 0;
  int sum2 = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (i == j)
      {
        sum1 += arr[i][j];
      }

      if ((i + j) == (N - 1))
      {
        sum2 += arr[i][N - i - 1];
      }
    }

    // N - i to get last element
    // sum1 = arr[i][i] + arr[i+1][i+1] + arr[i+2][i+2];
    // sum2 = arr[i][i+2] + arr[i+1][i+1] + arr[i+2][i];
  }

  cout << abs(sum1 - sum2) << endl;

  return 0;
}