#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const double alpha = 0.3;
	const double beta = 0.0001;

	double w1 = 0, w2 = 0;
	double w1_next, w2_next;

	ofstream proc("process.dat");

	for (int i=0;i<50;i++) {
		w1_next = w1 - alpha * (w1 - w2 + 1) - beta * w1;
		w2_next = w2 - alpha * (-w1 + w2 - 1) - beta * w2;

		proc << w1 << ' ' << w2 << endl;
		cout << w1 << ' ' << w2 << endl;
		w1 = w1_next;
		w2 = w2_next;
	}

	return 0;
}