
#include<iostream>
#define size 5
using namespace std;
class CQueue
{
private:
	int *arr;
	int front, rear;
	int SIZE;
public:
	CQueue(int SIZE);
	bool isFull();
	bool isEmpty();
	bool Insert(int data);
	int Remove();
	int display();
	~CQueue();
};


