
#include<iostream>
#define SIZE 5
using namespace std;
class Queue
{
private:
	int *arr;
	int front,rear;
	int size;
public:
	Queue(int size);
	bool isFull();
	bool isEmpty();
	bool Insert(int data);
	int Remove();
	int display();
	~Queue();
};


