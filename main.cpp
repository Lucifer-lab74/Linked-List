#include <iostream>
using namespace std;

// Creating class node which will act as a data storing class for each Node
// This consist 2 pointers data and next
// Data will point to data of that node and next will point to the next node location
class Node {
public:
	int data;
	Node* next;

	Node()
	{
		data = 0;
		next = NULL;
	}

	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};


// This main class for linked list
// This class constructor intiate head position to null
// This class implement 3 public methods to perform actions on linked list such as insert node, print list and delete node.

class Sequence {
	Node* head;

public:
	Sequence() { head = NULL; }
	void insert_node(int);
	void print_list();
	void delete_node(int);
};

// This function deletes node from the list
// If List is empty then it print Empty 
// Else it travels the till it reaches node before the Node to delete

void Sequence::delete_node(int nodeOffset)
{
	Node *temp1 = head, *temp2 = NULL;
	int ListLen = 0;

	if (head == NULL) {
		cout << "List empty." << endl;
		return;
	}

	while (temp1 != NULL) {
		temp1 = temp1->next;
		ListLen++;
	}


	if (ListLen < nodeOffset) {
		cout << "Index out of range"
			<< endl;
		return;
	}

	temp1 = head;

	if (nodeOffset == 1) {

		head = head->next;
		delete temp1;
		return;
	}

	while (nodeOffset-- > 1) {

		temp2 = temp1;

		temp1 = temp1->next;
	}

	temp2->next = temp1->next;

	delete temp1;
}


// This method implements insertion of Node in linked list
// To insert Node, traverse list till Node previous to that position
// Then point Next pointer to new Node and new Node pointer to next Node
void Sequence::insert_node(int data)
{
	Node* newNode = new Node(data);

	if (head == NULL) {
		head = newNode;
		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {

		temp = temp->next;
	}

	temp->next = newNode;
}


// Print list
// If it is empty then print empty list
// Else traverse list till end and print data of each Node
void Sequence::print_list()
{
	Node* temp = head;

	if (head == NULL) {
		cout << "List empty" << endl;
		return;
	}

	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}


void split_pos (
const Sequence <Key, Info>& seq, int start_pos, int len1, int len2, int count,
Sequence <Key, Info>& seq1,
Sequence <Key, Info>& seq2
){

}

void split_key (
const Sequence <Key, Info>& seq, Key& start_key, int start_occ, int len1, int len2, int count,
Sequence <Key, Info>& seq1,
Sequence <Key, Info>& seq2
){
	
}