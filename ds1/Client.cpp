#include "CQueue.h"
#include<conio.h>
int main()
{
	CQueue cq(5);
	//int size;
	//cout << "Enter the size";
	//cin >> size;
	for (int i = 0; i<size - 1; i++)
	{
		int data;
		cout << "Enter the data\n";
		cin >> data;
		cout << cq.Insert(data) << " ";
	}

	cq.display();
	cout << "\n";

	for (int i = 0; i<size - 1; i++)
	{
		cout << cq.Remove() << " ";
	}

	_getch();
	return 0;
}