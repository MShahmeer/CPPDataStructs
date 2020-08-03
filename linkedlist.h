#pragma once

class Node
{
    public:
    int val;
    Node* next;

    Node(int x);
};

class LinkedList
{
    public:
    Node* first;

    LinkedList();

    bool find(int x);
    int length();
    void insert(int x);
    void remove(int x);
};