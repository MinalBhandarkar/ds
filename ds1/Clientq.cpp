#include "Queue.h"
#include<conio.h>
int main()
{
	Queue q(5);

	for (int i = 0; i<SIZE - 1; i++)
	{
		int data;
		cout << "Enter the data\n";
		cin >> data;
		cout << q.Insert(data) << " ";
	}

	q.display();
	cout << "\n";

	for (int i = 0; i<SIZE - 1; i++)
	{
		cout << q.Remove() << " ";
	}

	_getch();
	return 0;
}