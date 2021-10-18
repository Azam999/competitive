#include <iostream>
#include <string>

using namespace std;

int main()
{
  string time;
  cin >> time;

  int length = time.length();

  string converted = time.substr(0, length - 2);
  string ending = time.substr(length - 2, length);

  int frontValue = stoi(time.substr(0, 2));
  string convertedFrontValue;
  if (ending == "PM" && frontValue != 12)
  {
    frontValue += 12;
  }
  else if (ending == "AM" && frontValue == 12)
  {
    frontValue -= 12;
  }

  convertedFrontValue = to_string(frontValue);

  if (frontValue < 10) {
    convertedFrontValue.insert(0, "0");
  }

  converted.replace(0, 2, convertedFrontValue);

  cout << converted << endl;

  return 0;
}