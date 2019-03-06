#include<iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

int main() {
	int a, b, t;
	cin >> a >> b;
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	cout << gcd(a,b) << endl;
	system("pause");
	return 0;
}