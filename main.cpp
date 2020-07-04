#include "bst.h"
#include "iostream"
using namespace std;

int main()
{
    BST tree(5);
    tree.insert(2);
    tree.insert(7);
    tree.get_root();
    tree.left_subtree->get_root();
    tree.right_subtree->get_root();
    int n = 1;
    do
    {
        cin >> n;
        cout << tree.find(n) << endl;
    }
    while (n != 0);
    return 1;
}