#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n; // Get the number of stalls
  cin >> n; // input stalls
  int preferred[n]; // preferred temperatures
  int current[n]; // current temperatures
  int num_commands = 0;

  // Get the preferred temperatures
  for (int i = 0; i < n; i++) {
    cin >> preferred[i];
  }

  // Get the current temperatures
  for (int i = 0; i < n; i++) {
    cin >> current[i];
  }

  for (int i = 0; i < n; i++) {
    int diff = preferred[i] - current[i]; // Get the difference between the preferred and current temperature

    if (diff > 0) {
      for (int j = i; i < abs(diff); j++) {
        current[j]++; // Add 1
        num_commands++; // Increment the number of commands
      }
    } else {
      for (int j = i; i < abs(diff); j++) {
        current[j]--; // Subtract 1
        num_commands++; // Increment the number of commands
      }
    }
  }

  cout << num_commands << endl; // Output the number of commands
  for (int i = 0; i < n; i++) {
    cout << current[i] << " "; // Output the current temperatures
  }

  return 0;
}