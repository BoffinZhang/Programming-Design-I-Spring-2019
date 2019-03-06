#include<iostream>
using namespace std;

int main() {
	int a, b, t;
	cin >> a >> b;
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	while (b > 0) {
		t = a % b;
		a = b;
		b = t;
	}
	cout << a << endl;
	system("pause");
	return 0;
}