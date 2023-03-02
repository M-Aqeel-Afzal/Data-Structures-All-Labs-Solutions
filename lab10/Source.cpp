
#include <iostream>
#include<queue>
using namespace std;
int tnodes = 0;
struct node
{
    int info;
    node* left, * right;
};

class bst
{
private:
public:
    int h = 0;
    int a = 0;
    node* root;
    int number;
    bst() {
        root = NULL;
    };
    void Height(node*);
    void insertion(node*);
    void in_order(node*);
    void level_order(node*);
    int level(int key);
    int level_recursive(int key, node* leavesNode, int l);
    int level1(int key);
    int level_link(int key, node* leavesNode, int l);
    node* deleteNode(node* root, int key);
    node* minNode(struct node* node);
};
int main()
{

   
    /*
                15
               /  \
              10    25
             /  \
            8    12
                   \
                    14
                    /
                    13
    */

    bst obj;
    obj.number = 15;
    obj.insertion(obj.root);
    obj.number = 10;
    obj.insertion(obj.root);
    obj.number = 12;
    obj.insertion(obj.root);
    obj.number = 14;
    obj.insertion(obj.root);
    obj.number = 13;
    obj.insertion(obj.root);
    obj.number = 8;
    obj.insertion(obj.root);
    obj.number = 25;
    obj.insertion(obj.root);

   // obj.in_order(obj.root);
    cout << "\n\nquestion 01\n\n" << endl;
    obj.in_order(obj.root);
    cout << endl;
    obj.Height(obj.root);
    cout << "Height of tree is  " << obj.h << endl;
    cout << "level of 8 is  : " << obj.level(8) << endl;;


    cout << "\n\nquestion 02\n\n" << endl;
    cout << "\nDeleteing 25 which has zero child\n";
    obj.root = obj.deleteNode(obj.root, 25);
    cout << "After deletion \n";
    obj.in_order(obj.root);
   
    cout << "\nDeleteing 14 which has one child\n";
    obj.root = obj.deleteNode(obj.root,14);
    cout << "After deletion \n";
    obj.in_order(obj.root);

    cout << "\nDeleteing 10 which has two child\n";
    obj.root = obj.deleteNode(obj.root, 10);
    cout << "After deletion \n";
    obj.in_order(obj.root);
    return 0;
   
}//-----------------------------------------------


//--------------------------------------------------------

void bst::insertion(node* temp)
{
    if (root == NULL)
    {
        temp = new node;
        temp->info = number;
        temp->left = NULL;
        temp->right = NULL;
        root = temp;
        return;
    }

    if (temp->info == number)
    {
        cout << " \n Given number is already present in tree.\n";
        return;
    }
    if (temp->info > number)
    {
        if (temp->left != NULL)
        {
            insertion(temp->left);
            return;
        }
        else
        {
            temp->left = new node;
            temp->left->info = number;
            temp->left->left = NULL;
            temp->left->right = NULL;
            return;
        }
    }
    if (temp->info < number)
    {
        if (temp->right != NULL)
        {
            insertion(temp->right);
            return;
        }
        else
        {
            temp->right = new node;
            temp->right->info = number;
            temp->right->left = NULL;
            temp->right->right = NULL;
            return;
        }
    }

} //--------------------    Insertion Function  Ends    --------------------------
void bst::in_order(node* temp)
{
    if (root == NULL)
    {
        cout << " Tree is empty.\n";
        return;
    }
    if (temp->left != NULL)
        in_order(temp->left);
    cout << temp->info << "  ";
    if (temp->right != NULL)
        in_order(temp->right);
    return;
}

void bst::Height(node* temp)
{
    if (root == NULL)
    {
        cout << " Tree is empty.\n";
        return;
    }
    if (temp->left != NULL)
    {
        a++;
        Height(temp->left);
    }


    if (temp->right != NULL)
    {
        a++;

        Height(temp->right);
    }

    if (h < a) {
        h = a;
    }
    a--;
    return;
}
int bst::level(int key)
{
    int level = 0;
    return level_recursive(key, root, level);
}
int bst::level_recursive(int key, node* Node, int l)
{

    if (Node != NULL) {
        if (key == Node->info) {
            return l;
        }
        if (key < Node->info) {
            return level_recursive(key, Node->left, ++l);
        }
        else {
            return level_recursive(key, Node->right, ++l);
        }
    }
    else {
        return NULL;
    }


}

struct node* bst::minNode(struct node* node)
{
    struct node* temp = node;

    while (temp && temp->left != NULL)
        temp = temp->left;

    return temp;
}
node* bst::deleteNode(node* root, int key)
{
   
    if (root == NULL)
        return root;

    if (key < root->info)
        root->left = deleteNode(root->left, key);
    else if (key > root->info)
        root->right = deleteNode(root->right, key);

   
    else {
      
        if (root->left == NULL) {
             node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL) {
             node* temp = root->left;
            delete root;
            return temp;
        }
    

       
         node* temp = minNode(root->right);
        root->info = temp->info;

       
        root->right = deleteNode(root->right, temp->info);
    }
    return root;
    }


