#include <iostream>
#include <string>

using namespace std;

void printSpaces(int numSpaces) {
    for (int i = 0; i < numSpaces; i++) {
        cout << " ";
    }
}

int main() {
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        printSpaces(N - i - 1);
        for (int j = 0; j < i + 1; j++) {
            cout << "#";
        }
        cout << endl;
    }
}