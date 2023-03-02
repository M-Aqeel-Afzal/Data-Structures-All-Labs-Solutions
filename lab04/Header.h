#include<iostream>
#include<string>
using namespace std;
template <class T1>
class LeCream
{
private:
	string arr[7] = {"Mango","Coffee","Almond crunch","chocolate","staw bary","totty fruit","vanila"};
	string Flavour;
	int scoop;
	string wafer;
	T1 price;
public:
	void set_Flavour(string c)
	{
		Flavour = c;
	}
	void set_Number_of_scoops(int i)
	{
		scoop = i;
	}
	void set_wafer(string c)
	{
		wafer = c;
	}
	void Calculate_Price()
	{
		if (wafer == "yes")
		{
			price = 10;
		}
		if (scoop == 2)
			price += 100;
		if (scoop == 3)
			price += 150;

		if (Flavour == arr[0])
		{
			if (scoop == 2)
				price += 20;
			if (scoop == 3)
				price = price + 30;
		}
	}

	T1 get_price()
	{
		return price;
	}
};
template <class T>
class List
{
private:
	T* arr;
	int size = 0;
public:
	List()
	{
		arr = new T[1];
	}
	int getsize()
	{
		return size;
	}
	void create_list()
	{
		size = 0;

	}

	T* get_list()
	{
		return arr;
	}

	void insert_at_end(T a)
	{
		arr[size] = a;
		size++;
	}
	void Remove_data_item(T a)
	{
		int flag = 0;
		for (int i = 0; i < size; i++)
		{

			if (arr[i] == a)
				flag = i;
		}
		for (int i = flag; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		size -= 1;
	}

	void Insert_in_middle(T a, int index)
	{
		T* arr1 = new T[size], j = 0;
		for (int i = 0; i < size; i++)
		{
			arr1[i] = arr[i];
		}
		size += 1;
		for (int i = 0; i < size; i++, j++)
		{
			if (index == i)
			{
				arr[i] = a;
				j++;
			}
			arr[j] = arr1[i];
		}

	}
	void Replace_data_item(T a, T b)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == b)
				arr[i] = a;
		}
	}
	bool IsEmpty()
	{
		if (size != 0)
			return false;
		else
			return true;
	}
	string Clear_the_list()
	{
		delete[]arr;
		return "Empty list";
	}
};


#pragma once
