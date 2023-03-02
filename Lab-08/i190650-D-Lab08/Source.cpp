#include<iostream>
#include<string>
using namespace std;
struct emp_ID                    //emp_ID struct
{
	string ID;
	emp_ID()
	{
		ID = "";
	}
	emp_ID(string id)
	{
		ID = id;
	}
};



struct date                     //date struct
{
	string jd;
	date()
	{
		jd = "";
	}
	date(string d)
	{
		jd = d;
	}
};



struct employee               //employee strcut
{
	emp_ID id;
	string NIC;
	date  j_date;
	int salary;
	int bounce;
	employee* next;
	employee* previous;
	employee()
	{
		NIC = "";
		salary = 0;
		bounce = 0;
		next = NULL;
		previous = NULL;
	}
	employee(string i_d, string nic, string da, int s, int b) :id(i_d), j_date(da)
	{
		NIC = nic;
		salary = s;
		bounce = b;
		next = NULL;
		previous = NULL;
	}
};



class List_doubly                             //doubly linked list          
{
private:
	employee* head;
	employee* temp;
public:
	List_doubly()
	{
		head = NULL;
		temp = new employee;
	}
	~List_doubly()
	{

	}
	void insert(const employee& em)
	{
		employee* temp1 = new employee;
		temp1->id.ID = em.id.ID;
		temp1->NIC = em.NIC;
		temp1->j_date.jd = em.j_date.jd;
		temp1->salary = em.salary;
		temp1->bounce = em.bounce;
		temp1->next = NULL;
		temp1->previous = NULL;

		temp = head;
		if (head == NULL)
		{
			head = temp1;
		}
		else
		{

			while (temp != NULL)
			{

				if (temp->next == NULL)
				{

					temp1->previous = temp;
					temp->next = temp1;
					break;
				}
				temp = temp->next;
			}
		}
	}
	void remove(emp_ID em)             //remov by id
	{
		temp = head;
		while (temp != NULL)
		{

			if (temp->id.ID == em.ID)
			{
				if (temp->previous == NULL)           //if for ist node
				{
					cout << "ist" << endl;
					temp = head;
					head = temp->next;
					temp->next->previous = NULL;
					delete temp;
					break;
				}
				else if (temp->next == NULL)             //for last nodes
				{
					cout << "ist" << endl;
					temp->previous->next = NULL;
					break;
				}
				else
				{
					temp->previous->next = temp->next;
					temp->next->previous = temp->previous;
					break;
				}
			}
			temp = temp->next;
		}


	}
	void update_salary(const int& s, emp_ID em)             //rupdate by id
	{



		temp = head;
		while (temp != NULL)
		{

			if (temp->id.ID == em.ID)
			{

				temp->salary = s;
				break;

			}
			temp = temp->next;
			if (temp == NULL)
				cout << "record does not found!  :)" << endl;
		}


	}
	void update_bounce(const int& b, emp_ID em)             //update by id
	{



		temp = head;
		while (temp != NULL)
		{

			if (temp->id.ID == em.ID)
			{

				temp->bounce = b;
				break;
			}
			temp = temp->next;
			if (temp == NULL)
				cout << "record does not found!  :)" << endl;
		}


	}
	void clear()
	{
		delete this;
	}
	bool isempty()
	{
		if (head == NULL)
			return 1;
		else
			return 0;
	}

	void print()             //print
	{

		temp = head;
		while (temp != NULL)
		{

			cout << "ID: " << temp->id.ID << "   ";
			cout << "NIC: " << temp->NIC << "   ";
			cout << "joining date: " << temp->j_date.jd << "   ";
			cout << "salary: " << temp->salary << "   ";
			cout << "bounce: " << temp->bounce << "   ";
			cout << "\n\n";
			temp = temp->next;
		}
		cout << endl;
	}
};






class List_circular                            //doubly linked list          
{
private:
	int count = 0;
	employee* head;
	employee* temp;
public:
	List_circular()
	{
		head = NULL;
		temp = new employee;
	}
	~List_circular()
	{

	}
	void insert(const employee& em)
	{
		employee* temp1 = new employee;
		temp1->id.ID = em.id.ID;
		temp1->NIC = em.NIC;
		temp1->j_date.jd = em.j_date.jd;
		temp1->salary = em.salary;
		temp1->bounce = em.bounce;
		temp1->next = NULL;
		temp1->previous = NULL;
		temp = head;

		if (head == NULL)
		{
			head = temp1;
			head->next = head;
			head->previous = head;
		}
		else
		{
			int n = count;
			while (n > 0)
			{

				if (temp->next == head->previous)
				{
					temp1->next = head->previous;             //setting next of last to head for making circular
					temp1->previous = temp->next;
					temp->next = temp1;
					break;
				}
				temp = temp->next;
			}
		}
		count++;
	}
	void remove(emp_ID em)             //remov by id
	{
		int n = count;
		temp = head;
		while (n > 0)
		{

			if (temp->next->id.ID == em.ID)
			{

				temp->next->next->previous = temp->previous;
				temp->next = temp->next->next;


				count--;
				break;
			}
			temp = temp->next;
			n--;
		}
	}
	void update_salary(const int& s, emp_ID em)             //rupdate by id
	{
		temp = head;
		int n = count;
		while (n > 0)
		{

			if (temp->id.ID == em.ID)
			{

				temp->salary = s;
				break;

			}
			temp = temp->next;

			n--;
			if (n == 0)
				cout << "record does not found!  :)" << endl;
		}
	}
	void update_bounce(const int& b, emp_ID em)             //update by id
	{
		temp = head;
		int n = count;
		while (n > 0)
		{

			if (temp->id.ID == em.ID)
			{

				temp->bounce = b;
				break;
			}
			temp = temp->next;

			n--;
			if (n == 0)
				cout << "record does not found!  :)" << endl;
		}
	}
	void clear()
	{
		delete this;
	}
	bool isempty()
	{
		if (head == NULL)
			return 1;
		else
			return 0;
	}
	void print()             //print
	{

		temp = head;
		int n = count;
		while (n > 0)
		{

			cout << "ID: " << temp->id.ID << "   ";
			cout << "NIC: " << temp->NIC << "   ";
			cout << "joining date: " << temp->j_date.jd << "   ";
			cout << "salary: " << temp->salary << "   ";
			cout << "bounce: " << temp->bounce << "   ";
			cout << "\n\n";
			temp = temp->next;
			n--;
		}
		cout << endl;
	}
};
int main()
{
	employee e1("18i-8079", "12345-1234567-1", "31/07/2017", 50000, 5000),
		e2("18i-8098", "12355-1034577-0", "15/08/2019", 30000, 0),
		e3("18i-4243", "10045-1200567-1", "2/09/2015", 70000, 10000),
		e4("18i-8843", "10845-1034577-1", "2/12/2012", 100000, 15000);
	List_doubly l1;
	l1.insert(e1);
	l1.insert(e2);
	l1.insert(e3);
	l1.insert(e4);
	cout << "\n\n*********************    implementation of doubly linked list      ************************ " << endl;
	cout << "\n\nafter inserting all the record " << endl;
	l1.print();
	emp_ID id("18i-4243"), id2("18i-8079"), id3("18i-0001");


	l1.remove(id);
	cout << "\n\nafter removing" << endl;
	l1.print();


	l1.update_salary(55000, id2);
	cout << "\n\nafter updating salary " << endl;
	l1.print();

	cout << "\n\nafter updating bounce " << endl;
	l1.update_bounce(55000, id3);
	l1.print();
	if (l1.isempty())
	{
		cout << "yes list is empty" << endl;
	}
	else
		cout << "no list is not empty" << endl;




	//circular list implementation
	List_circular l2;
	l2.insert(e1);
	l2.insert(e2);
	l2.insert(e3);
	l2.insert(e4);
	cout << "\n\n*********************    implementation of circular linked list      ************************ " << endl;
	cout << "\n\nafter inserting all the record " << endl;
	l2.print();
	emp_ID id4("18i-4243"), id5("18i-8079"), id6("18i-0001");


	l2.remove(id4);
	cout << "\n\nafter removing" << endl;
	l2.print();


	l2.update_salary(55000, id5);
	cout << "\n\nafter updating salary " << endl;
	l2.print();

	cout << "\n\nafter updating bounce " << endl;
	l2.update_bounce(55000, id6);
	l2.print();
	if (l2.isempty())
	{
		cout << "yes list is empty" << endl;
	}
	else
		cout << "no list is not empty" << endl;
	return 0;
}
