#include "Queue.h"
#include <iostream>
#include <assert.h>
using namespace std;

int main() {
	try{
		Queue<int> a(8);
		int* correct1 = new int(4);
		int* correct2 = new int(8);

		a.enQueue(2);
		/*a.enQueue(7);
		a.enQueue(0);
		a.enQueue(4);
		a.enQueue(1);
		a.enQueue(9);
		a.enQueue(9);
		a.enQueue(9);*/

		correct1[0] = 2;
		correct1[1] = 7;
		correct1[2] = 0;
		correct1[3] = 4;

		cout << a.deQueue() << endl;
		/*a.deQueue();
		a.deQueue();
		a.deQueue();*/

		/*for (int i = 0; i < 4; i++) { 
			assert(a.deQueue() == correct1[i]);
		}
		cout << "First test passed" << endl;*/

		cout << "Huh very soon ^o^" << endl;
		/*a.enQueue(5);
		a.enQueue(9);
		a.enQueue(2);
		a.enQueue(8);
*/
		correct2[0] = 1;
		correct2[1] = 9;
		correct2[2] = 9;
		correct2[3] = 9;
		correct2[4] = 5;
		correct2[5] = 9;
		correct2[6] = 2;
		correct2[7] = 8;

		/*for (int i = 0; i < 8; i++) {
			assert(a.deQueue() == correct2[i]);
		}
		cout << "Second test passed" << endl;*/

		//~a();
	}
	catch (const char* error) {
		cerr << error << endl;
		return -1;
	}
	return 0;
}