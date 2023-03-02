#include<iostream>
using namespace std;
class HASHING {
public:
	void insert(int element, int size) {
		int* array = new int[size];
		int  index, n = 0;
		int Mod = 10;

		index = element % Mod;

		while (array[index] != INT_MIN) {

			if (array[index] != INT_MAX) {
				break;
			}
			index = (index + 1) % Mod;
			++n;
			if (n == size)
				break;

		}

		if (n != size)
			array[index] = element;
		else
			cout << "Hash table was full of elements\nNo Place to insert this element\n\n";


	}

	void search(int array[], int size) {
		int Mod = 10;
		int element, index, n = 0;

		cout << "Enter element you want to search\n";
		cin >> element;

		index = element % Mod;

		while (n++ != size) {
			if (array[index] == element) {
				cout << "Element found at index %d\n" << index << endl;
				break;
			}
			else
				if (array[index] == INT_MAX || array[index] != INT_MIN)
					index = (index + 1) % Mod;
		}
		if (--n == size)
			cout << "Element not found in hash table\n";
	}
	void delet(int array[], int size) {
		int Mod = 10;
		int element, n = 0, index;

		cout << "Enter element to delete\n";
		cin >> element;

		index = element % Mod;

		while (++n != size) {
			if (array[index] == INT_MIN) {
				cout << "Element not found \n";
				break;
			}
			else if (array[index] == element) {
				array[index] = INT_MAX;
				cout << "Element deleted\n\n";
				break;
			}
			else {
				index = (index + 1) % Mod;
			}
		}
		if (--n == size)
			cout << "Element not found\n";
	}
};
int main() {
	int  Mod = 10;
	HASHING HS;
	int array[] = { 1,4,6,8,9,13,15,17 };

	int size = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++) {
		HS.insert(array[i], size);
	}

	cout << "elements have been inserted main" << endl;
	for (int j = 0; j < size; j++) {
		cout << array[j] << endl;
	}

	HS.search(array, size);
	HS.delet(array, size);

	cout << "element has been deleted" << endl;
	cout << "you can confrim that the element has been deleted by searching it again" << endl;
	HS.search(array, size);
	return 0;
}