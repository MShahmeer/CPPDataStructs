#include <iostream>
using namespace std;

class BST
{
    public:
    int root;
    BST* left_subtree;
    BST* right_subtree;

    BST(int x)
    {
        root = x;
        left_subtree = nullptr;
        right_subtree = nullptr;
    }

    int get_root()
    {
        cout << "Root value: " << root << endl;
        return root;
    }

    void insert(int x)
    {
        if (x <= root)
        {
            if (left_subtree == nullptr)
            {
                left_subtree = new BST(x);
            }
            else
            {
                left_subtree->insert(x);
            }
        }
        else
        {
            if (right_subtree == nullptr)
            {
                right_subtree = new BST(x);
            }
            else
            {
                right_subtree->insert(x);
            }
        }
    }

    bool find(int x)
    {
        if (x == root)
        {
            return true;
        }
        else if (x < root)
        {
            if (left_subtree == nullptr)
            {
                return false;
            }
            else
            {
                return left_subtree->find(x);
            }
        }
        else
        {
            if (right_subtree == nullptr)
            {
                return false;
            }
            else
            {
                return right_subtree->find(x);
            }
        }
    }
};