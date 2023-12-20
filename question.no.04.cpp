#include<iostream>
using namespace std;
int main() {
	int N, i, j;
	bool isprime;
	cout << "enter a positive integer N\n";
	cin >> N;
	for (i = N; i <= 2; i--) {
		isprime = true;
		for (j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				isprime = false;
				break;
			}
		}
		if (isprime) {
			cout << "the largest prime number is\n" << i;
			break;
		}
	}
	return 0;
}