#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int positiveCount = 0;
  int negativeCount = 0;
  int zeroCount = 0;

  int N;
  cin >> N;

  int arr[N];

  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    arr[i] = x;

    if (arr[i] == 0)
      zeroCount++;
    if (arr[i] > 0)
      positiveCount++;
    if (arr[i] < 0)
      negativeCount++;
  }

  double positiveRatio = (double)positiveCount / N;
  double negativeRatio = (double)negativeCount / N;
  double zeroRatio = (double)zeroCount / N;

  cout << fixed << setprecision(6) << positiveRatio << endl;
  cout << fixed << setprecision(6) << negativeRatio << endl;
  cout << fixed << setprecision(6) << zeroRatio << endl;

  return 0;
}