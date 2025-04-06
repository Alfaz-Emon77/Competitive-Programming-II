#include <iostream>
using namespace std;

int n, q;
int v[111];
int PrefixSum[111];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    PrefixSum[0] = 0;
    for (int i = 1; i <= n; i++) {
        PrefixSum[i] = PrefixSum[i - 1] + v[i];
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << PrefixSum[r] - PrefixSum[l - 1] << endl;
    }

    return 0;
}
