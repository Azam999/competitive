#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("speeding.in");
ofstream fout("speeding.out");

int main() {
    int N;
    int M;

    fin >> N >> M;

    int road[N][2];
    int journey[M][2];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            fin >> road[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < 2; j++) {
            fin >> journey[i][j];
        }
    }
    
    int road_speeds[100][2];
    int journey_speeds[100][2];

    for (int i = 0; i < 100; i++) {
        road_speeds[i][0] = i + 1;
        journey_speeds[i][0] = i + 1;
    }

    for (int i = 0; i < N; i++)
    {
        int distance = road[i][0];
        int speed = road[i][1];

        int start_distance;

        if (i == 0) {
            start_distance = 0;
        } else {
            start_distance += road[i - 1][0];
        }

        for (int j = start_distance; j < distance + start_distance; j++) {
            road_speeds[j][1] = speed;
        }
    }

    for (int i = 0; i < M; i++)
    {
        int distance = journey[i][0];
        int speed = journey[i][1];

        int start_distance;

        if (i == 0) {
            start_distance = 0;
        } else {
            start_distance += journey[i - 1][0];
        }

        for (int j = start_distance; j < distance + start_distance; j++) {
            journey_speeds[j][1] = speed;
        }
    }

    int max_speed_diff = 0;

    for (int i = 0; i < 100; i++) {
        int road_speed = road_speeds[i][1];
        int journey_speed = journey_speeds[i][1];

        int speed_diff = journey_speed - road_speed;

        if (speed_diff > max_speed_diff) {
            max_speed_diff = speed_diff;
        }
    }

    fout << max_speed_diff << endl;

    return 0;
}