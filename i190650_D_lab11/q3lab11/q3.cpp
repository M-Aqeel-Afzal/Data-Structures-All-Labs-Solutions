#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
#include<iomanip>
using namespace std;
string preProcessing(string FilePath) {
	vector<string> v1[107];
	string word1,line,w2="1";
	fstream f1;
	f1.open(FilePath);
	for (int i = 0; i < 28; i++)
	{
		getline(f1, line);
	}
	for (int i = 0; i < 107; i++)
	{
		getline(f1, line);
		stringstream str1(line);
		
		getline(str1, word1, ',');
		if (w2 != word1)
		{

		}
		v1->push_back(line);
		
		goto sahil;
		for (int j = 0; i < 30; j++)
		{
			getline(f1, line);
			stringstream str2(line);
			getline(str2, word1, ',');
			getline(str2, word1, ',');
			getline(str2, word1, ',');
			if (word1 == "CS201")
			{
				getline(str2, word1, ',');
				getline(str2, word1, ',');
				getline(str2, word1, ',');
				if (word1 == "UK")
				{

					word1 = "";
					goto sahil;
				}
			}
			else
			v1[i].push_back(line);
		}
		
	sahil:;
	}

	for (int i = 0; i < 107; i++)
	{
		for (int j = 0; j < v1[i].size(); j++)
		{
			cout << v1[i][j] << endl;
		}
	}
	return "";
}
int main()
{
	string FilePath = "./TestFiles/rawDataset.csv";
 preProcessing(FilePath);
	string trueRow0 = "Excellent,Excellent,Excellent,Excellent,Average,Excellent,Good,Good,Good,Excellent,Excellent,Excellent,Good,Unknown,Excellent,Good,Excellent,Excellent";
	string trueRow4 = "Average,Average,Average,Average,Good,Unknown,Unknown,Bad,Bad,Good,Bad,Average,Unknown,Worst,Unknown,Average,Excellent,Worst";

	return 0;
}
//int tnodes = 0;
//struct node
//{
//    int info;
//    node* left, * right;
//
//};
//
//class bst
//{
//private:
//public:
//    int h = 0;
//    int a = 0;
//    node* root;
//    int number;
//    bst() {
//        root = NULL;
//    };
//    void Height(node*);
//    void insertion(node*);
//    void in_order(node*);
//    void level_order(node*);
//
//};
//int main()
//{
//    /*
//                15
//               /  \
//              10    25
//             /  \
//            8    12
//                   \
//                    14
//                    /
//                    13
//    */
//
//    bst obj;
//    obj.number = 15;
//    obj.insertion(obj.root);
//    obj.number = 10;
//    obj.insertion(obj.root);
//    obj.number = 12;
//    obj.insertion(obj.root);
//    obj.number = 14;
//    obj.insertion(obj.root);
//    obj.number = 13;
//    obj.insertion(obj.root);
//    obj.number = 8;
//    obj.insertion(obj.root);
//    obj.number = 25;
//    obj.insertion(obj.root);
//
//    //obj.in_order(root);
//    obj.in_order(obj.root);
//   /* obj.Height(obj.root);
//    cout << "Height " << obj.h << endl;*/
//
//}//-----------------------------------------------
//
//
////--------------------------------------------------------
//
//void bst::insertion(node* temp)
//{
//    if (root == NULL)
//    {
//        temp = new node;
//        temp->info = number;
//        temp->left = NULL;
//        temp->right = NULL;
//        root = temp;
//        return;
//    }
//
//    if (temp->info == number)
//    {
//        cout << " \n Given number is already present in tree.\n";
//        return;
//    }
//    if (temp->info > number)
//    {
//        if (temp->left != NULL)
//        {
//            insertion(temp->left);
//            return;
//        }
//        else
//        {
//            temp->left = new node;
//            temp->left->info = number;
//            temp->left->left = NULL;
//            temp->left->right = NULL;
//            return;
//        }
//    }
//    if (temp->info < number)
//    {
//        if (temp->right != NULL)
//        {
//            insertion(temp->right);
//            return;
//        }
//        else
//        {
//            temp->right = new node;
//            temp->right->info = number;
//            temp->right->left = NULL;
//            temp->right->right = NULL;
//            return;
//        }
//    }
//
//} //--------------------    Insertion Function  Ends    --------------------------
//void bst::in_order(node* temp)
//{
//    if (root == NULL)
//    {
//        cout << " Tree is empty.\n";
//        return;
//    }
//    //cout << temp->info << "  ";
//    if (temp->left != NULL)
//        in_order(temp->left);
//    cout << temp->info << "  ";
//    if (temp->right != NULL)
//        in_order(temp->right);
//   // cout << temp->info << "  ";
//    return;
//}
//
//void bst::Height(node* temp)
//{
//    if (root == NULL)
//    {
//        cout << " Tree is empty.\n";
//        return;
//    }
//    if (temp->left != NULL)
//    {
//        a++;
//        Height(temp->left);
//    }
//
//
//    if (temp->right != NULL)
//    {
//        a++;
//
//        Height(temp->right);
//    }
//
//    if (h < a) {
//        h = a;
//    }
//    a--;
//    return;
//}
////----------------------------    PROGRAM ENDS HERE  ---------------------------------------