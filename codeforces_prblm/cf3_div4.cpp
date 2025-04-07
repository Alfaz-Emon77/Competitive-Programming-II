#include <iostream>
using namespace std;

int main() {
    long long testCases;
    cin >> testCases;

    while (testCases--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long total = 0;

        total += (m > a) ? a : m;

        total += (m > b) ? b : m;
        long long remaining = 2 * m - total;
        total += (remaining > c) ? c : remaining;

        cout << total << endl;
    }

    return 0;
}
