#include<iostream>
#include<string>
using namespace std;
int main() {
	string str :
	cout << "enter the string\n";
	cin >> str;
	string result; "";
	for (int i = 0; i < str.length(); i++) {
		if (result.find(str[i]) == string::npos) {
			result += str[i];
		}
	}
	cout << "resultant string is\n;";
	return 0;
}