#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *inputTree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // ber kore ana
        Node *p = q.front();
        q.pop();

        // jabotiyo ja kaj
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);

        p->left = left;
        p->right = right;

        // children gulo ke rakha
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->data == x)
        return true;
    if (x < root->data)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}
int main()
{
    Node *root = inputTree();
    int x;
    cin >> x;

    if (search(root, x))
        cout << "found" << endl;
    else
        cout << "not found" << endl;
    return 0;
}