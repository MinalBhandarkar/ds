#include "Queue.h"



Queue::Queue(int size)
{
	this->size = size;
	front = rear = -1;
	arr = new int[size];
}


bool Queue::isFull()
{
	if (rear==SIZE-1)
	{
		return true;
	}
	return false;
}

bool Queue::isEmpty()
{
	if (rear== -1 && front==-1)
	{
		return true;
	}
	return false;
}

bool Queue::Insert(int data)
{
	if (isFull())
	{
		return false;
	}

	return arr[++rear] = data;
}

int Queue::Remove()
{
	if (isEmpty())
	{
		return false;
	}
	return arr[++front];
}

int Queue::display()
{
	for (int i = 0; i < SIZE - 1; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

Queue::~Queue()
{
	delete[] arr;
}
