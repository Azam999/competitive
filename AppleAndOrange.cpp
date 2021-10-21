#include <iostream>

using namespace std;

int main()
{
  int s; // starting point of Sam's house location.
  int t; // ending location of Sam's house location.
  int a; // location of the Apple tree.
  int b; // location of the Orange tree.
  int m; // number of apples
  int n; // number of oranges
  int applesFall = 0; // number of apples that fall on Sam's house
  int orangesFall = 0; // number of oranges that fall on Sam's house

  cin >> s >> t >> a >> b >> m >> n;

  // Add each apple distance to location of apple tree.
  // Add each orange distance to location of orange tree.
  // Check the number of apples that fall on Sam's house.
  // Check the number of oranges that fall on Sam's house.

  for (int i = 0; i < m; i++) {
    int distance;
    cin >> distance;
    int appleLanding = a + distance;
    if (appleLanding >= s && appleLanding <= t)
    {
      applesFall++;
    }
  }

  for (int i = 0; i < n; i++) {
    int distance;
    cin >> distance;
    int orangeLanding = b + distance;
    if (orangeLanding >= s && orangeLanding <= t) {
      orangesFall++;
    }
  }

  cout << applesFall << endl;
  cout << orangesFall << endl;

  return 0;
}