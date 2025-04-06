#include <iostream>
using namespace std;

bool isSubsequence(string s, string t) {
    int i = 0;
    for (int j = 0; j < t.size(); j++) {
        if (s[i] == t[j]) i++;
    }
    return i == s.size();
}

int main() {
    string s = "abc", t = "a1b2c3";
    cout << (isSubsequence(s, t) ? "Yes" : "No") << endl;
}
