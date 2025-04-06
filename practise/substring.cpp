#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "HelloWorld";
    string sub = str.substr(0, 5); // From index 0, take 5 characters
    cout << "Substring: " << sub << endl;
    return 0;
}
