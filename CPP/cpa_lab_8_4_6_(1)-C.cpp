#include <iostream>

using namespace std;

class BinaryTree
{
    protected:
        struct node
        {
            int data;
            node* left;
            node* right;
        };
        node* root;
        node* Add(int x, node* t)
        {
            if(t == NULL)
            {
                t = new node;
                t->data = x;
                t->left = t->right = NULL;
            }
            else if(x < t->data)
                t->left = Add(x, t->left);
            else if(x > t->data)
                t->right = Add(x, t->right);
            return t;
        }
        virtual void print(node* t){ }
        virtual void find_by_index(node* t, int &index, int &value){ }
    public:
        BinaryTree()
        {
            root = NULL;
        }
        void Insert(int x)
        {
            root = Add(x, root);
        }
        void Display()
        {
            print(root);
        }
        int operator[] (int index)
        {
            if (index < 1)
                throw string("index out of range");
            int value;
            find_by_index(root, index, value);
            return value;
        }
};

class InorderTree: public BinaryTree
{
    void print(node* t)
    {
        if(t == NULL)
            return;
        print(t->left);
        cout << t->data << " ";
        print(t->right);
    }
    void find_by_index(node* t, int& index, int& value)
    {
        if(t == NULL)
            return;
        find_by_index(t->left,index,value);
        if(index == 0)
            value = t->data;
        index--;
        find_by_index(t->right,index,value);
    }
};

class PostorderTree: public BinaryTree
{
    void print(node* t)
    {
        if(t == NULL)
            return;
        print(t->left);
        print(t->right);
        cout << t->data << " ";
    }
    void find_by_index(node* t, int& index, int& value)
    {
        if(t == NULL)
            return;
        find_by_index(t->left,index,value);

        find_by_index(t->right,index,value);
        if(index == 0)
            value = t->data;
        index--;
    }
};

class PreorderTree: public BinaryTree
{
    void print(node* t)
    {
        if(t == NULL)
            return;
        cout << t->data << " ";
        print(t->left);
        print(t->right);
    }
    void find_by_index(node* t, int& index, int& value)
    {
        if(t == NULL)
            return;
        if(index == 0)
            value = t->data;
        index--;
        find_by_index(t->left,index,value);

        find_by_index(t->right,index,value);
    }
};

ostream& operator<< (ostream &strm, InorderTree t) {
    t.Display();
}

ostream& operator<< (ostream &strm, PostorderTree t) {
    t.Display();
}

ostream& operator<< (ostream &strm, PreorderTree t) {
    t.Display();
}

int main()
{
    int n;
    cout << "Enter how many items should be pushed onto the tree: ";
    cin >> n;
    InorderTree it;
    PostorderTree pot;
    PreorderTree prt;
    int j;
    for(int i = 0; i < n; i++)
    {
        cin >> j;
        it.Insert(j);
        pot.Insert(j);
        prt.Insert(j);
    }

    cout << "Enter number of item: ";
    cin >> j;
    cout << "Inorder: "<< it[j];
    cout << endl;
    cout << "Postorder: "<< pot[j];
    cout << endl;
    cout << "Preorder: "<< prt[j];
    cout << endl;
    cout << "Inorder: "<< it;
    cout << endl;
    cout << "Postorder: "<< pot;
    cout << endl;
    cout << "Preorder: "<< prt;
    cout << endl;


    return 0;
}
