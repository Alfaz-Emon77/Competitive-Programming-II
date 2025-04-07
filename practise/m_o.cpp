#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addBig(string a, string b) {
    if (a.length() < b.length()) swap(a, b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    string result = "";
    int carry = 0;

    for (int i = 0; i < a.length(); i++) {
        int sum = (a[i] - '0') + (i < b.length() ? (b[i] - '0') : 0) + carry;
        carry = sum / 10;
        result += (sum % 10) + '0';
    }

    if (carry) result += carry + '0';
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string a = "99999";
    string b = "10";
    cout << "Sum: " << addBig(a, b) << endl;
}
