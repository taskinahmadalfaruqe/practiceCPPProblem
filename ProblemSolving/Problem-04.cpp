#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N <= 0) {
        for (int i = N; i <= 1; i++) {
            cout << i << " ";
        }
    }
    else {
        for (int i = 1; i <= N; i++) {
            cout << i << " ";
        }
    }

    return 0;
}
