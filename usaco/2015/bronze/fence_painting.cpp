#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("paint.in");
ofstream fout("paint.out");

int main() {
    int a, b, c, d;

    fin >> a >> b;
    fin >> c >> d;

    // int total = (b - a) + (d - c);

    // int intersection = std::max(min(b, d) - max(a, c), 0);

    // fout << total - intersection << endl;

    bool painted[101] = {0};
    for (int i = a; i < b; i++) {
        painted[i] = 1;
    }

    for (int i = c; i < d; i++) {
        painted[i] = 1;
    }

    int total = 0;
    for (int i = 0; i < 101; i++) {
        // fout << painted[i] << " ";
        if (painted[i]) {
            total++;
        }
    }

    fout << total << endl;

    return 0;
}