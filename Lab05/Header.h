#include<iostream>
using namespace std;
template <typename T>
T minimum(T arr[], int size)
{
	T flag = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < flag)
			flag = arr[i];
	}
	return flag;
}
template <typename T>
T area(T radius)
{
	return 3.14 * radius * radius;
}
template <typename T>
T area(T width, T length)
{
	return  width * length;
}
template <class T>
class ATM
{
private:
	string *account_No;
	string *name;
	T *balance;
	int size;

public:
	ATM()
	{
		account_No = new string[1];

		balance=new T[1];
		name = new string[1];
		size = 0;
	}
	void create_account(T b,string acc_no,string n)
	{
		balance[size] = b;
		account_No[size] = acc_no;
		name[size] = n;
		++size;
	}
	void debit(T d,string a)
	{
		for (int i =0 ; i < size; i++)
		{
			if (a == account_No[i])
				balance[i] = balance[i] - d;
		}
	}
	void credit(T d,string a)
	{
		for (int i =0 ; i < size; i++)
		{
			if (a== account_No[i])
				balance[i] = balance[i] + d;
		}
	}
	T check_balance(string d)
	{
		for (int i =0 ; i < size; i++)
		{
			if (d == account_No[i])
				return balance[i];
		}
	}
	~ATM()
	{}
};



//The code below shows the working of a simple calculator in C++.  GoogleTest to
//validate the calculator class working.
//also modify to template based
template<class T>
class calculator
{
public:
	T add(T a, T b) {
		return (a + b);
	}

	T divide(T a, T b) {
		if (b == 0)
			return -1;
		else
		return (a / b);
	}

	T sqrt(T x) {
		if (x < 0) return -1;
		if (x == 0 || x == 1) return x;
		int i = 1, result = 1;
		while (result <= x) {
			i++;
			result = i * i;
		}

		return i - 1;
	}

	T factorial(T n) {
		int result = 1;
		for (int i = 1; i <= n; i++) {
			result *= i;
		}
		return result;
	}

	bool IsPrime(T n) {
		//T a = --n;

		for(int i=2;i<n;i++)
		{
			
			if (n % i == 0)
			{
				return false;
			}
			
		}
			return true;
	}
};