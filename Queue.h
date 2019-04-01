#ifndef QUEUE_H
#define QUEUE_H

template <typename TypeData>
class Queue
{
private:
	TypeData* q_;
	int head_;
	int tail_;
	int size_;

public:
	Queue(int size) {
		TypeData* qq = new TypeData(size);
		q_ = qq;
		head_ = 1;
		tail_ = 1;
		size_ = size;
	}

	void enQueue(Queue qu, TypeData i) {
		if (tail_ == size_) {
			std::cout << "Queue overflow, make a circle" << std::endl;
			tail_ = 1;
		}
		qu.tail_ = i;
		tail_++;
	}
	TypeData deQueue(Queue qu) {
		if (tail_ = head_ = 1) throw "Sorry, the queue is empty";
		TypeData x = qu.head_;
		if (head_ == size_) {
			std::cout << "Queue overflow, make a circle" << endl;
			head_ = 1;
		}
		else {
			head_++;
		}
		return x;
	}

	virtual ~Queue(void){}
};
#endif