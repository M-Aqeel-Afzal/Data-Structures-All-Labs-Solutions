#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    int height;
};
class AVL
{
    
    Node* root;

    void makeEmpty(Node* newNode)              //making empty tree
    {
        if (newNode == NULL)
            return;
        makeEmpty(newNode->left);
        makeEmpty(newNode->right);
        delete newNode;
    }

    Node* Insert(int value, Node* newNode)            //inserting 
    {
        if (newNode == NULL)      //if root is null
        {
            newNode = new Node;
            newNode->data = value;
            newNode->height = 0;
            newNode->left = newNode->right = NULL;
            cout << "insertion successful" << endl;
        }
        else if (value < newNode->data)      //if value if less
        {
            newNode->left = Insert(value, newNode->left);
            if (height(newNode->left) - height(newNode->right) == 2)
            {
                if (value< newNode->left->data)
                {
                   
                    newNode = SingleRight(newNode);
                }
                else
                {
                    
                    newNode = DoubleRight(newNode);
                }
            }
        }
        else if (value > newNode->data)            //if value is greater
        {
            newNode->right = Insert(value, newNode->right);
            if (height(newNode->right) - height(newNode->left) == 2)
            {
                if (value > newNode->right->data)
                {
                    newNode = SingleLeft(newNode);
                   
                }
                else
                {
                    newNode = DoubleLeft(newNode);
                   
                }
            }
        }

        newNode->height = max(height(newNode->left), height(newNode->right)) + 1;
        return newNode;
    }

    Node* SingleRight(Node*& newNode)
    {
        Node* current = newNode->left;
        newNode->left = current->right;
        current->right = newNode;
        newNode->height = max(height(newNode->left), height(newNode->right)) + 1;
        current->height = max(height(current->left), newNode->height) + 1;

        return current;
    }

    Node* SingleLeft(Node*& newNode)
    {
        Node* current = newNode->right;
        newNode->right = current->left;
        current->left = newNode;
        newNode->height = max(height(newNode->left), height(newNode->right)) + 1;
        current->height = max(height(newNode->right), newNode->height) + 1;
        return current;
    }

    Node* DoubleLeft(Node*& newNode)
    {
        newNode->right = SingleRight(newNode->right);
        return SingleLeft(newNode);
    }

    Node* DoubleRight(Node*& newNode)
    {
        newNode->left = SingleLeft(newNode->left);
        return SingleRight(newNode);
    }

    Node* Minimum(Node* newNode)
    {
        if (newNode == NULL)
        {
            return NULL;
        }
        else if (newNode->left == NULL)
        {
            return newNode;
        }
        else
        {
            return Minimum(newNode->left);
        }
    }

    Node* Maximum(Node* newNode)
    {
        if (newNode == NULL)
        {
            return NULL;
        }
        else if (newNode->right == NULL)
        {
            return newNode;
        }
        else
        {
            return Maximum(newNode->right);
        }
    }

    Node* Delete(int value, Node* newNode)
    {
        Node* current;

        if (newNode == NULL)            //if value is not present in the tree
        {
            cout<<value << " is not found in the tree" << endl;
            return NULL;
        }
        else if (value < newNode->data)
        {
            newNode->left = Delete(value, newNode->left);
        }
        else if (value > newNode->data)
        {
            newNode->right = Delete(value, newNode->right);
        }
        else if (newNode->left && newNode->right)
        {
            current = Minimum(newNode->right);
            newNode->data = current->data;
            newNode->right = Delete(newNode->data, newNode->right);
        }
        else
        {
            current = newNode;

            if (newNode->left == NULL)
            {
                newNode = newNode->right;
            }
            else if (newNode->right == NULL)
            {
                newNode = newNode->left;
            }
            cout << "deleted"<<endl;
            delete current;
        }
        if (newNode == NULL)
        {
            
            return newNode;
        }

        newNode->height = max(height(newNode->left), height(newNode->right)) + 1;

        if (height(newNode->left) - height(newNode->right) == -2)
        {
            if ((height(newNode->right->right) - height(newNode->right->left)) == 1)
                return SingleLeft(newNode);

            else
                return DoubleLeft(newNode);
        }

        else if (height(newNode->right) - height(newNode->left) == 2)
        {

            if ((height(newNode->left->left) - height(newNode->left->right)) == 1) {
                return SingleRight(newNode);
            }

            else
                return DoubleRight(newNode);
        }


        return newNode;
    }

    int height(Node* newNode)
    {
        if (newNode == NULL)
        {
            return -1;
        }
        else
            newNode->height;
    }

    int getBalance(Node* newNode)
    {
        if (newNode == NULL)
            return 0;
        else
            return height(newNode->left) - height(newNode->right);
    }

    void InOrder(Node* newNode)
    {
        if (newNode == NULL)
        {
            return;
        }
        InOrder(newNode->left);
        cout << newNode->data << " ";
        InOrder(newNode->right);
        return;
    }

public:
    AVL()
    {
        root = NULL;
    }

    void Insert(int value)
    {
        root = Insert(value, root);
        return;
    }

    void Delete(int value)
    {
        root = Delete(value, root);
        return;
    }

    void Display()
    {
        InOrder(root);
        cout << endl;
        return;
    }
};

int main()
{

    AVL t;
    t.Insert(1);
    t.Insert(2);
    t.Insert(3);

    cout << "\n\ndisplaying: \n";
    t.Display();

    t.Insert(4);
    t.Insert(5);
    t.Insert(6);
    t.Insert(10);

    cout << "\n\ndisplaying: \n";
    t.Display();

    t.Insert(8);
    t.Insert(7);
    t.Insert(9);

    cout << "\n\ndisplaying: \n";
    t.Display();

    t.Delete(11);
    t.Delete(10);
    t.Delete(9);
    t.Delete(6);


    cout << "\n\ndisplaying: \n";
    t.Display();

    
    t.Delete(8);
    t.Delete(7);

    t.Display();

    t.Delete(5);
    t.Delete(4);
    t.Delete(3);
    t.Delete(2);

    cout << "\n\ndisplaying: \n";
    t.Display();

    t.Delete(1);

    cout << "\n\ndisplaying: \n";
    t.Display();
}