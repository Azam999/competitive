#include <iostream>

using namespace std;

int main()
{
  int a = 0;
  int b = 0;

  int arrA[3];
  int arrB[3];
  for (int i = 0; i < 3; i++)
  {
    int x;
    cin >> x;
    arrA[i] = x;
  }

  for (int i = 0; i < 3; i++)
  {
    int x;
    cin >> x;
    arrB[i] = x;
  }

  for (int i = 0; i < 3; i++)
  {
    if (arrA[i] > arrB[i])
    {
      a += 1;
    }
    else if (arrA[i] < arrB[i])
    {
      b += 1;
    }
  }

  cout << a << " " << b << endl;

  return 0;
}
