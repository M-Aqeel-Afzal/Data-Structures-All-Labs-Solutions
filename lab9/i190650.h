#include<iostream>
using namespace std;
template<typename T>
struct Q_node
{
	T ch;
	Q_node* next;
};
template<typename T>
class queue
{
public:
	int count;
	Q_node<char>* rear;
	Q_node<char>* front;
	queue* next;
	queue()
	{
		count = 0;
		rear = NULL;
		front = NULL;
	}
	~queue()
	{

	}

	void enqueue(T c)
	{
		Q_node<char>* temp = new Q_node<char>;
		temp->ch = c;
		temp->next = NULL;
		if (empty())
		{
			front = temp;
			rear = temp;
		}
		else
		{
			rear->next = temp;
			rear = temp;
		}
		count++;
	}
	T dequeue()
	{
		if (front == NULL)
		{
			cout << "queue is empty" << endl;
			return ' ';
		}
		Q_node<char>* temp = new Q_node<char>;
		temp = front->next;
		T c = front->ch;
		delete front;
		front = temp;
		count--;
		if (count == 0)
			rear = NULL;
		return c;
	}
	bool empty()
	{
		if (front == NULL && rear == NULL)
			return 1;
		else
			return 0;
	}
	
	void clear_queue()
	{
		delete front;
		delete rear;

	}
	
};

string cal(string s1)
{
	string s3 = "";
	int l = s1.length();
	static int count = 1, j = 0;
	char ch = ' ';
	for (int i = 0; i < l; i++)
	{
		if (s1[i] == ' ')
			count++;
	}
	queue<char>* q1 = new queue<char>[count];
	queue<char> s2;
	for (int i = 0; i < l; i++)
	{
		q1[j].enqueue(s1[i]);
		if (s1[i] == ' ')
			j++;
	}
	j = 0;
	for (int i = 0; i < l; i++)
	{
		ch = q1[j].dequeue();
		if (ch == ' ')
			j++;
		s2.enqueue(ch);

	}
	for (int i = 0; i < l; i++)
	{
		ch = s2.dequeue();
		s3 = s3 + ch;
	}
	return s3;
}









































template<typename T>
struct snode
{
	char ch;
	snode<char>* next;
};
template<typename T>
class stack
{
	snode<char>* top;
public:
	stack()
	{
		top = NULL;

	}
	~stack()
	{
	}
	template<typename T>
	void push(T c)
	{
		snode<char>* temp = new snode<char>;
		temp->ch = c;
		temp->next = top;
		top = temp;
	}
	
	T pop()
	{
		if (isempty())
		{
			cout << "overflow" << endl;

			return '0';
		}
		T c;
		snode<char>* temp = new snode<char>;
		temp = top;
		top = top->next;
		c = temp->ch;
		delete temp;
		return c;
	}
	bool isempty()
	{
		if (top == NULL)
			return 1;
		else
			return 0;
	}
	char _top()
	{
		return top->ch;
	}
	
};

bool cal_S(string str1)
{


	stack<char> s1;
	int l = str1.length(), count = 0;
	for (int i = 0; i < l; i++)
	{
		if (str1[i] == '{' || str1[i] == '(' || str1[i] == '[')
			s1.push(str1[i]);
		if (str1[i] == ']' || str1[i] == '}' || str1[i] == ')')
		{
			char ch;
			ch = s1.pop();
			if (ch != str1[i])
			{
				return 0;
			}

		}
		if (i==l-1)
			return 1;

	}
	
}