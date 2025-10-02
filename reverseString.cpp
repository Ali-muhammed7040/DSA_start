#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    // Base case
    if (str.length() <= 1) {
        return str;
    }
    // Recursive case
    else {
        return reverseString(str.substr(1)) + str[0];
    }
}

int main() {
    string text = "hello";
    cout << "Reverse of '" << text << "' is: '" << reverseString(text) << "'" << endl;
    // Output: Reverse of 'hello' is: 'olleh'
    return 0;
}