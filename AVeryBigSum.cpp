#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    long sum = 0;
    for (int i = 0; i < N; i++) {
        long x;
        cin >> x;
        sum += x;
    }
    
    cout << sum << endl;
}
