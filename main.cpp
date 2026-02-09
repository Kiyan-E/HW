#include <iostream>
using namespace std;

int main() {
    int matris[4][3];

    cout << "Enter 12 numbers for 4x3 matris:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matris[i][j];
        }
    }

    cout << "\nMatris to power 3:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            int result = matris[i][j] * matris[i][j] * matris[i][j];
            cout << result << " ";
        }
        cout << endl;
    }

    return 0;
}
