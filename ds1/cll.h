#include "node.h"
 using namespace std; 
 
class CircularLinkedList 
{ 
 CNode * head;
 public: 
 CircularLinkedList(); 
 ~CircularLinkedList();
 bool insert(int data);
 bool insert(int data, int position);
 void display();
 bool deleteByPos(int position);
 bool deleteByVal(int data); 
 };