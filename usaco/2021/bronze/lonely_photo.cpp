#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n; // number of photos
  string s; // photo
  cin >> n >> s; // read in number of photos and photo
  int ans = 0; // number of lonely photos

  // Outer loop iterates through the max number of consecutive photos i
  for (int i = 0; i < n; i++)
  {
    // count the number of times g and h appears
    int g = 0; // number of times g appears -- initialize to 0
    int h = 0; // number of times h appears -- initialize to 0

    // inner loop gets the index of each photo in the consecutive photos
    for (int j = i; j < n; j++)
    {
      if (s[j] == 'G') // Check if letter is equal to G
      {
        g++; // if there is a G, increment g
      }
      else // Check if letter is not G (meaning it is H)
      {
        h++; // if there is a H, increment h
      }

      // for a lonely photo to exist, the photo must have at least three total photos and one g or one h
      if (g + h >= 3 && (g == 1 || h == 1))
      {
        ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}