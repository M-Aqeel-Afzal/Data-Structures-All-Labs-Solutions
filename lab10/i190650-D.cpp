#include<iostream>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
	int h = 0;
	int a = 0;
};
struct tree
{
	node* root;
	tree()
	{
		root = NULL;
	}
	~tree()
	{
		delete root;
	}

	void insert(int v)
	{
		node* temp;
		node* temp1;
		temp = new node;
		temp->data = v;
		temp->left = NULL;
		temp->right = NULL;
		temp1 = root;
		if (root == NULL)
			root = temp;
		else
		{
			while (temp1 != NULL)
			{
				if (v < temp1->data)
				{
					if (temp1->left != NULL)
					{
						temp1 = temp1->left;
					}
					else
					{
						temp1->left = temp;
						cout << "inserted" << endl;
						break;
					}
				}
				else if (v > temp1->data)
				{
					if (temp1->right != NULL)
					{
						temp1 = temp1->right;
					}
					else
					{
						temp1->right = temp;
						cout << "inserted" << endl;
						break;
					}
				}
				
			}

		}
	}
	bool retrieve(int key)
	{
		node* temp1;
		temp1 = root;

		if (root == NULL)
		{
			cout << "tree is empty" << endl;
			return 0;
		}
		else
		{

			while (temp1!= NULL)
			{
				if (key == temp1->data)
				{
					cout << "value is found which is " << temp1->data << endl;
					return 1;
				}
				else
				{
					if (key < temp1->data)
						temp1 = temp1->left;
					else if (key > temp1->data)
						temp1 = temp1->right;
				}
			}
			cout << "value is not found" << endl;
			return 0;

		}
	}
	int depth(node* node)
	{
		if (node == NULL)
			return 0;
		else
		{
			
			int l = depth(node->left);
			int r = depth(node->right);

			if (l > r)
				return ++l;
			else return ++r;
		}
	}
	int height()                           //function for finding max hieght
	{
		return depth(root);
	}

};

int main()
{
	tree t1;
	t1.insert(9);
	t1.insert(7);
	t1.insert(11);
	t1.insert(6);
	t1.insert(5);
	t1.insert(8);
	t1.insert(1);
	t1.insert(4);
	t1.retrieve(1);
	cout << t1.height() << endl;
	return 0;
}