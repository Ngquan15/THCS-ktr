#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int test = 1; test <= t; ++test) {
        int n, m;
        cin >> n >> m;
        int A[n][m];
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> A[i][j];

        cout << "Test " << test << ":\n";
        int result[n][n] = {0}; 

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < m; ++k) {
                    result[i][j] += A[i][k] * A[j][k];
                }
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
