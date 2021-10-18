#include <iostream>

using namespace std;

int main()
{
  int N;
  cin >> N;

  int grades[N];
  int convertedGrades[N];
  for (int i = 0; i < N; i++)
  {
    cin >> grades[i];

    if (grades[i] < 38)
    {
      convertedGrades[i] = grades[i];
    }
    else
    {
      for (int j = grades[i]; j < grades[i] + 10; j++)
      {
        if ((j % 5 == 0) && (j - grades[i] < 3))
        {
          convertedGrades[i] = j;
          break;
        }
        else
        {
          convertedGrades[i] = grades[i];
        }
      }
    }
  }

  for (int i = 0; i < N; i++)
  {
    cout << convertedGrades[i] << endl;
  }

  return 0;
}
