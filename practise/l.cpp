#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> words = {"banana", "apple", "mango", "grape"};

    
    sort(words.begin(), words.end());

    cout << "Words in lexicographical order:\n";
    for (string word : words) {
        cout << word << endl;
    }

    return 0;
}
