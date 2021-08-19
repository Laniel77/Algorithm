#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int T;
	int x1, y1, r1, x2, y2, r2;
	double d, bigR, smallR;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		bigR = r1 >= r2 ? r1 : r2;
		smallR = r1 < r2 ? r1 : r2;

		if (d == 0 && bigR == smallR)
			cout << -1 << endl;
		else if (d == 0 && bigR != smallR || d > bigR + smallR || d < bigR + smallR && d < bigR - smallR)
			cout << 0 << endl;
		else if (d == bigR + smallR || d < bigR + smallR && d == bigR - smallR)
			cout << 1 << endl;
		else if (bigR - smallR < d && d < bigR + smallR)
			cout << 2 << endl;
	}
}