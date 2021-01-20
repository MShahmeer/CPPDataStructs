#include "linkedlist.h"
#include <iostream>
using namespace std;

Node::Node(int x)
{
    val = x;
    next = nullptr;
}

LinkedList::LinkedList()
{
    first = nullptr;
}

bool LinkedList::find(int x)
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

int LinkedList::length()
{
    int count = 0;
    Node* curr = first;
    while (curr != nullptr)
    {
        cout << curr->val;
        count++;
        curr = curr->next;
    }
    cout << count;
    return count;
}

void LinkedList::insert(int x)
{
    if (first == nullptr)
    {
        Node newNode = Node(x);
        first = &newNode;
    }
    else
    {
        Node newNode = Node(x);
        Node* curr = first;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }
        first->next = &newNode;
    }
}

void LinkedList::remove(int x)
{
    cout << "TODO";
}