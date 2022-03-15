#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("triangles.in");
ofstream fout("triangles.out");

/*
Valid triangle:
- one side parallel to the x-axis
- one side parallel to the y-axis
- right triangle
    - this means that a


Find all areas and find the largest of them, then multiply it by 2.
*/

pair<int, int> points[200];

int main()
{
    int N;
    fin >> N;

    for (int i = 0; i < N; i++)
    {
        fin >> points[i].first >> points[i].second;
    }

    int max_area = 0;

    // First point in the list + 0
    for (int i = 0; i < N; i++)
    {
        // Second point in the list + 1
        for (int j = i + 1; j < N; j++)
        {
            // Third point in the list + 2
            for (int k = j + 1; k < N; k++)
            {
                // First point
                pair<int, int> a = points[i];
                int x1 = a.first;
                int y1 = a.second;

                // Second point
                pair<int, int> b = points[j];
                int x2 = b.first;
                int y2 = b.second;

                // Third point
                pair<int, int> c = points[k];
                int x3 = c.first;
                int y3 = c.second;
                
                // check if the points are parallel to the x-axis and parallel to the y-axis - right triangle
                if ((x1 == x2 || x2 == x3 || x3 == x1) && (y1 == y2 || y2 == y3 || y3 == y1)) {
                    // Find largest base
                    int base = max(abs(x2 - x1), max(abs(x3 - x3), abs(x3 - x2)));

                    // Find largest height
                    int height = max(abs(y2 - y1), max(abs(y3 - y1), abs(y3 - y2)));

                    // Find 2*area
                    if (base * height > max_area) {
                        max_area = base * height;
                    }
                }
            }
        }
    }

    fout << max_area << endl;

    return 0;
}