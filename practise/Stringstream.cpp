#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string text = "I love C++";
    stringstream ss(text);
    string word;

    while (ss >> word) {
        cout << word << endl;
    }
}
