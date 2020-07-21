#pragma once

class BST
{
    public:
    int* root;
    BST* left_subtree;
    BST* right_subtree;

    BST(int x);

    int get_root();
    void insert(int x);
    void remove(int x);
    bool find(int x);
};