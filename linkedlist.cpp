#include <iostream>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int x)
    {
        val = x;
        next = nullptr;
    }
};

class LinkedList
{
    Node* first;

    LinkedList()
    {
        first = nullptr;
    }

    bool find(int x)
    {
        if (first == nullptr)
        {
            return false;
        }
        Node* curr = first;
        while (curr != nullptr)
        {
            if (curr->val == x)
            {
                return true;
            }
            else
            {
                curr = curr->next;
            }
        }
        return false;
    }

    int length()
    {
        int count = 0;
        Node* curr = first;
        while (curr != nullptr)
        {
            count++;
            curr = curr->next;
        }
        cout << count;
        return count;
    }

    void insert(int x)
    {
        Node newNode(x);
        if (first == nullptr)
        {
            *first = newNode;
        }
        else
        {
            Node* curr = first;
            while (curr->next != nullptr)
            {
                curr = curr->next;
            }
            curr->next = &newNode;
        }
    }

    void remove(int x)
    {
        cout << "TODO";
    }
};