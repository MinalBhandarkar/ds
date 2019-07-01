CircularLinkedList::CircularLinkedList()  
{  head = NULL; } 
 
void CircularLinkedList::display()  
{  
if (head == NULL)
   return;  
   CNode * temp = head;  
   do 
   {   cout << temp->getData() << " ";  
   temp = temp->getNext();  
   } while (temp != head);           //keep getData till temp does not become head 
 
 cout << endl; } 
 
CircularLinkedList::~CircularLinkedList()  {    if (head == NULL) 
{ return; } 
 
 CNode * headBK = head;
 CNode * temp = head; 
 do {   
 temp = head; 
 head = head->getNext();  
 cout << "del : " << temp->getData() << endl; 
 delete temp; 
 } while (head != headBK); 
 }
 
 bool CircularLinkedList::insert(int data) 
 {
	 CNode * newNode = new CNode(data); 
	 if (newNode == NULL)
		 {   return false;  } 
 
 if (head == NULL)
	 {     //First Time   
 head = newNode;  
 newNode->setNext(newNode);  
 return true;  } 
 
 CNode * temp = head;   
 while (temp->getNext() != head)         //traverse while does not get head 
 {  
 temp = temp->getNext(); 
 } 
 temp->setNext(newNode);   //temp-> = newNode  
 newNode->setNext(head);      //temp->next=head  
 return true; 
 }
 
 bool CircularLinkedList::insert(int data, int position) 
 {  
 if (position <= 0 || (head == NULL && position > 1)) 
 {  
 return false; 
 } 
 CNode * newNode = new CNode(data);  
 if (newNode == NULL)
	 { 
 return false; 
 } 
 
 if (position == 1)   
 { // pos is one and list is empty   
if (head == NULL) 
{  
  head = newNode;   
  newNode->setNext(newNode);    
  return true;  
  }      //position is one and list is not empty 
 
  newNode->setNext(head);     //locate last node   
  CNode * temp = head;  
  while (temp->getNext() != head) 
  {
	  temp = temp->getNext();  
	  }   
	  temp->setNext(newNode); 
	  head = newNode;  
	  return true; 
	  } 
 
 // locate pos - 1  
 CNode * prev = head;  
 for (int i = 1; i < position - 1; i++) 
 {   prev = prev->getNext();   
if (prev == head) 
{    
delete newNode; 
   return false; 
   } 
   } 
   newNode->setNext(prev->getNext()); 
   prev->setNext(newNode); 
   return true;
   }

bool CircularLinkedList::deleteByVal(int data)
 {
	 if (head == NULL) 
	 {   return false;  } 
 
 if (head->getData() == data) 
	 {   if (head->getNext() == head)
		 {    delete head;
	 head = NULL;  
	 return true;  
	 } 
 
  CNode * del = head;  
  CNode * last = head;  
  while (last->getNext() != head) 
  {    last = last->getNext();   } 
 
  last->setNext(del->getNext());  
  head = head->getNext(); 
 
  delete del; 
  return true;  
  } 
 
 CNode * prev = head, *del = head;  
 while (del->getData() != data)
	 {   
 prev = del;   del = del->getNext(); 
 
  if (del == head)
	  {    return false;   }  
  } 
 
 prev->setNext(del->getNext()); 
 delete del;  
 return true; 
 } 
 
 
  
Delete Data by Position 
bool CircularLinkedList::deleteByPos(int position) 
{  if (position <= 0 || head == NULL)
	{   return false;  }  
if (position == 1) { 
  //if list is having only one node   
  if (head == head->getNext())
	  {    delete head; 
  head = NULL;   
  return true;   } 
 
  //if list has more than one node   
  CNode * del = head;  
  CNode * last = head;  
  while (last->getNext() != head)
	  {   
  last = last->getNext(); 
  } 
 
  last->setNext(del->getNext()); 
  head = head->getNext(); 
  delete del;  
  return true; 
  } 
 
 CNode * prev = head; 
 for (int i = 1; i < position - 1; i++)
	 {  
 prev = prev->getNext();   //n+2 invalid pos   
 if (prev == head) 
 {    return false;   } 
 } 
 
 //n+1 invalid pos 
 if (prev->getNext() == head) 
 {   return false;  }  
CNode * del = prev->getNext();
  prev->setNext(del->getNext());
  delete del; 
  return true; 
  } 
