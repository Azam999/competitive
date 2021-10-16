#include <iostream>

using namespace std;

const int SIZE = 5;

int main() {
    long arr[SIZE];
    
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + SIZE);
    
    long min = 0;
    long max = 0;
    for (int i = 0; i < SIZE; i++) {
        if (i != 0) max += arr[i];
        if (i != SIZE - 1) min += arr[i]; 
    }
    
    cout << min << " " << max << endl;
}