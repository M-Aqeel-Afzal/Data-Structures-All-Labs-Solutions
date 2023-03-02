#include<iostream>
#include<stdlib.h>
#include<Time.h>
using namespace std;
template<typename T>
void pairs_finder(T (&arr)[50])
{
	cout << " *********************First of all gernaration of 50 size array!" << endl;
	srand(time(0));
	for (int i = 0; i < 50; i++)
	{
		arr[i] = rand() % 50 + 1;
		cout << arr[i] << " ";
	}
	cout << endl << endl << "					**************pairs********************" << endl;
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{

			for (int k = 0; k < 50; k++)
			{
				if (arr[i] == arr[j] + arr[k])
					cout << arr[j] << "  and  " << arr[k] << " is a pair whoes sum is equal to " << arr[i] << endl;
			}
		}
	}
}