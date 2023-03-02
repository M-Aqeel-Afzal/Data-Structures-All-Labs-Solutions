#include<iostream>
using namespace std;
class node
{
public:
	double data;
	node* next;
	/*node()
	{
		next = new node;
	}*/
};
class DT
{
protected:
	node* head;
	node* end;
public:
	DT()
	{
		head = NULL;
		end = NULL;
	}
	~DT()
	{
		delete head;
		delete end;
	}
	/*void create_DT()
	{
		head = new node;
		end = new node;
	}*/
	void insert(double d)
	{
		node* temp = new node;
		temp->data = d;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			end = temp;
		}
		else
		{
			end->next = temp;
			end = temp;
		}
	}
		void insert_at(double d, int index)
		{
			node* current;
			node* previous;
			current = head;
			node* temp = new node();
			temp->data = d;
			for (int i = 0; i < index; i++)
			{
				previous = current;
				current = current->next;
}
			previous->next = temp;
			temp->next = current;

		}
		void remove_start()
		{
			
			node* n1 = new node();
			n1 = head;
			head = n1->next;
			delete n1;
		}
		void remove_mid(int idx)
		{

			node* n1 = new node();
			node* n2 = new node();
			n1 = head;
			for (int i = 0; i < idx; i++)
			{
				n2 = n1;
				n1 = n1->next;
				
			}
			n2->next = n1->next;
			delete n1;
		}
		void remove_end()
		{

			node* n1 = new node();
			node* n2 = new node();
			n1 = head;
			while(n1->next!=NULL)
			{
				n2 = n1;
				n1 = n1->next;

			}
			n2->next = NULL;
			delete n1;
		}
		void replace_at(int idx,double v)
		{

			node* n1 = new node();
			node* n2 = new node();
			n1 = head;
			for (int i = 0; i < idx; i++)
			{
				n2 = n1;
				n1 = n1->next;

			}
			n1->data = v;
			
		}
		void print()
		{

			node* n1 = new node();
			n1 = head;
			while (n1->next != NULL)
			{
				
				cout << n1->data << " ";
				n1 = n1->next;
			}
			cout << endl;
		}
		void sort()
		{

			node* n1 = new node();
			n1 = head;
			while (n1->next != NULL)
			{
				
				node* n2 = new node();
				n1 = n1->next;
				n2 = head;
				double temp;
				while (n2->next != NULL)
				{
					if (n1->data > n2->data)
					{
						temp = n1->data;
						n1->data = n2->data;
						n2->data = temp;
					}
				}
			}
			
		}
		node* get_head()
		{
			return head;
	}
};
bool palindrome(DT list)
{

	node* n1 = new node();
	n1 = list.get_head();
	node* n2 = new node();
	n2 = list.get_head();
	int i = 0;
	while (n1->next != NULL)
		i++;
	
while (n1->next != NULL)
{
	for(int j=i-1;j>=0;i--)
	{
		n2 = n2->next;
	}
	if (n1->data != n2->data)
		return 0;
n1 = n1->next;
	}
return 1;
}
