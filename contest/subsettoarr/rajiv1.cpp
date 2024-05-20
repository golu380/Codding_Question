#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    vector<char> characters(m);
    vector<vector<char>> grid(n, vector<char>(10, 'z'));

    for (int i = 0; i < m; i++) {
        cin >> characters[i];
    }

    vector<int> positions(m);
    for (int i = 0; i < m; i++) {
        cin >> positions[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (positions[j] < 10) {
                grid[i][positions[j]] = characters[j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
