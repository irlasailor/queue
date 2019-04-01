#include "Queue.h"
#include <iostream>
#include <assert.h>
using namespace std;

int main() {
	try{
		Queue<int> a(10);
		int correct1(4);
		int correct2(8);

		a[0] = 2;
		a[1] = 7;
		a[2] = 0;
		a[3] = 4;
		a[4] = 1;
		a[5] = 9;
		a[6] = 9;
		a[7] = 9;

		correct1[0] = 2;
		correct1[1] = 7;
		correct1[2] = 0;
		correct1[3] = 4;

		for (int i = 0; i < 4; i++) { 
			assert(a.deQueue(a, a[i]) == correct1[i]);
		}
		cout << "First test passed" << endl;

		cout << "Huh very soon ^o^" << endl;
		a.enQueue(a, 5);
		a.enQueue(a, 9);
		a.enQueue(a, 2);
		a.enQueue(a, 8);

		correct2[0] = 1;
		correct2[1] = 9;
		correct2[2] = 9;
		correct2[3] = 9;
		correct2[4] = 5;
		correct2[5] = 9;
		correct2[6] = 2;
		correct2[7] = 8;

		for (int i = 0; i < 8; i++) {
			assert(a.deQueue(a, a[i]) == correct2[i]);
		}
		cout << "Second test passed" << endl;

		~a();
	}
	catch (const char* error) {
		cerr << error << endl;
		return -1;
	}
	return 0;
}