#include "CQueue.h"



CQueue::CQueue(int SIZE)
{
	this->SIZE = size;
	front = rear = -1;
	arr = new int[size];
}


bool CQueue::isFull()
{
	if ((front==-1 && rear == size - 1)||front==(rear+1)% size)
	{
		return true;
	}
	return false;
}

bool CQueue::isEmpty()
{
	if (rear == -1 && front == -1)
	{
		return true;
	}
	return false;
}

bool CQueue::Insert(int data)
{
	if (isFull())
	{
		return false;
	}

	rear = (rear + 1) % size;
	return arr[rear] = data;
}

int CQueue::Remove()
{
	if (isEmpty())
	{
		return false;
	}
	front = (front + 1) % size;
	return arr[front];
}

int CQueue::display()
{
	for (int i = 0; i < size - 1; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

CQueue::~CQueue()
{
	delete[] arr;
}
