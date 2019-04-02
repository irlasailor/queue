#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

template <typename TypeData>
class Queue
{
private:
	TypeData* q_;
	int head_;
	int tail_;
	int size_;

public:
	Queue(int size);
	void enQueue(TypeData i);
	TypeData deQueue();

	~Queue();
};

template <typename TypeData>
Queue<TypeData>::Queue(int size) {
	q_ = new TypeData[size+1];
	head_ = 1;
	tail_ = 1;
	size_ = size+1;
}

template <typename TypeData>
void Queue<TypeData>::enQueue(TypeData i) {
	if (tail_ == size_) {
		std::cout << "Queue overflow, make a circle" << std::endl;
		tail_ = 1;
	}
	q_[tail_] = i;
	tail_++;
}

template <typename TypeData>
TypeData Queue<TypeData>::deQueue() {
	if (tail_ == head_ == 1) throw "Sorry, the queue is empty";
	TypeData x = q_[head_];
	if (head_ == size_) {
		std::cout << "Queue overflow, make a circle" << std::endl;
		head_ = 1;
	}
	else {
		head_++;
	}
	return x;
}

template <typename TypeData>
Queue<TypeData>::~Queue() {
	delete[] q_;
}
#endif