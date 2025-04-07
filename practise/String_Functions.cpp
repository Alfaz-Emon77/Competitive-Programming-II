#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "alfaz";

    cout << "Length: " << s.length() << endl;
    cout << "Substring: " << s.substr(1, 3) << endl;
    s.append(" emon");
    cout << "After append: " << s << endl;
    s.erase(0, 5);
    cout << "After erase: " << s << endl;

    return 0;
}