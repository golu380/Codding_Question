#include <iostream>
#include <vector>

using namespace std;

int main() {
    int L, W, H;
    cin >> L >> W;

    vector<vector<int>> room(L, vector<int>(W));

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < W; j++) {
            cin >> room[i][j];
        }
    }
    
    cin >> H;

    int row = -1, col = -1;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < W; j++) {
            if (room[i][j] >= H) {
                row = i;
                col = j;
                break;
            }
        }
        if (row != -1) {
            break;
        }
    }


    if (row != -1 && col != -1) {
        cout << row  << " " << col  << endl;
    } else {
        cout << "No suitable placement found." << endl;
    }

    return 0;
}
