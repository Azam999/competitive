#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }

  sort(arr, arr + N);

  int maxValue = arr[N - 1];
  int maxCount = 0;

  int i = N - 1;
  while (arr[i] == maxValue)
  {
    maxCount++;
    i--;
  }

  // Going through each value is too slow!
  // for (int i = 0; i < N; i++) {
  //   if (arr[i] == maxValue) {
  //     maxCount++;
  //   }
  // }

  cout << maxCount << endl;

  return 0;
}