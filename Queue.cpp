#include "Queue.h"
#include <iostream>

template <typename TypeData>
void Queue::enQueue(Queue qu, TypeData i) {
	if (tail_ == size_) {
		std::cout << "Queue overflow, make a circle" << std::endl;
		tail_ = 1;
	}
	qu[tail_] = i;
	tail_++;
}

template <typename TypeData>
TypeData Queue::deQueue(Queue qu) {
	if (tail_ = head_ = 1) throw "Sorry, the queue is empty";
	TypeData x = qu[head_];
	if (head_ == size_) {
		std::cout << "Queue overflow, make a circle" << endl;
		head_ = 1;
	} else {
		head_++;
	}
	return x;
}

//Queue::Queue()
//{
//}
//
//

template <typename TypeData>
Queue::~Queue(void)
{
}
