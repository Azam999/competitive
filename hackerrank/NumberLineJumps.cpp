#include <iostream>

using namespace std;

int main() {
  int x1, v1, x2, v2;

  cin >> x1 >> v1 >> x2 >> v2;

  bool isSameLocation = false;

  // Limit is 10000
  for (int i = 0; i < 10000; i++) {
    if ((x1 + v1 * i) == (x2 + v2 * i)) {
      isSameLocation = true;
      break; // Don't continue the loop if the statement is true;
    }
  }

  if (isSameLocation) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}