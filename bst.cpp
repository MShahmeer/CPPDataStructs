#include <iostream>
using namespace std;

class BST
{
    public:
    int root;
    BST* left_subtree;
    BST* right_subtree;

    BST()
    {
        // 0 used to represent an empty root
        root = 0;
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
        if (root == 0)
        {
            root = x;
        }
        else if (x <= root)
        {
            if (left_subtree == nullptr)
            {
                left_subtree = new BST();
                left_subtree->insert(x);
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
                right_subtree = new BST();
                right_subtree->insert(x);
            }
            else
            {
                right_subtree->insert(x);
            }
        }
    }

    void remove(int x)
    {
        if (x == root)
        {
            if (right_subtree == nullptr)
            {
                if (left_subtree == nullptr)
                {
                    root = 0;
                }
                else
                {
                    root = left_subtree->root;
                    right_subtree = left_subtree->right_subtree;
                    left_subtree = left_subtree->left_subtree;
                }
            }
            else
            {
                root = right_subtree->root;
                BST* curr = right_subtree;
                while (curr->left_subtree != nullptr)
                {
                    curr = curr->left_subtree;
                }
                curr->left_subtree = left_subtree;
                left_subtree = right_subtree->left_subtree;
                right_subtree = right_subtree->right_subtree;
                
            }
            
        }
        else if (x < root)
        {
            left_subtree->remove(x);
        }
        else
        {
            right_subtree->remove(x);
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