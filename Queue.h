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

	void enQueue(Queue qu, TypeData i);
	TypeData deQueue(Queue qu);

	virtual ~Queue(void);
};
#endif