#include <iostream>

using namespace std;

int sumdays(int y, int m, int d) {
    if (m <= 2) m += 12, y -= 1;
    return (y * 146097) / 400 + (m * 153 + 8) / 5 + d;
}

int main() {
	int ay, am, ad, by, bm, bd;
	cin >> ay >> am >> ad >> by >> bm >> bd;
	int a = sumdays(ay, am, ad);
	int b = sumdays(by, bm, bd);
	//cout << "a = " << a << endl << "b = " << b << endl;
	if(a>b)
		cout << 2 << endl;
	if(a<b)
		cout << 1 << endl;
	if(a==b)
		cout << 0 << endl;
	return 0;
}
