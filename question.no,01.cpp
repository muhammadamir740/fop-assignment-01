#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    if (str1 == str2) {
        // swap string 1
        char temp = str1[0];
        for (int i = 0; i < str1.length() - 1; i++) {
            str1[i] = str1[i + 1];
        }
        str1[str1.length() - 1] = temp;
        cout << "Rotated string 1: " << str1 << endl;
    }
    else {
        cout << "Strings are not equal." << endl;
    }
    return 0;
}