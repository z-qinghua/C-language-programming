#include <iostream>
using namespace std;

int bitManipulation2(int n, int i) {
	return (-1 >> (32 - i) << (32 - i)) ^ n;
	}
	
int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n >> i;
		cout << bitManipulation2(n, i) << endl;
	}
	return 0;
}
