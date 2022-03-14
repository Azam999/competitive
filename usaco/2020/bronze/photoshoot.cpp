#include <iostream>

using namespace std;

// Numbers can't repeat each other because no cow can have the same number

// 5
// 4 6 7 6

// Test case: 3 - WORKS
// 3, 4 - 3, 6 - 1, 7 - 5, 6 - 2
// = 3, 1, 5, 2, 4

// Test case: 2 - DOESN'T WORK
// 2, 4 - 2, STOP (repeated digit)
// = 2, 2

// Test case: 1 - DOESN'T WORK
// 1, 4 - 1, 6 - 3, STOP (repeated digit)
// = 1, 3, 3

int main() {
    int N;
    cin >> N;

    int a[N - 1];
    for (int i = 0; i < N - 1; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < a[0]; i++) {
        int b[N];
        b[0] = i;

        for (int i = 1; i < N; i++) {
            b[i] = a[i - 1] - b[i - 1];
        }

        // check for duplicates
        bool duplicate = false;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (b[i] == b[j]) {
                    duplicate = true;
                }
            }
        }

        if (!duplicate) {
            for (int i = 0; i < N; i++) {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}