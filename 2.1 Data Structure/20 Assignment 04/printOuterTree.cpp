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
void printLeft(Node *root)
{
    if (root == NULL)
        return;
    if (root->left)
    {
        printLeft(root->left);
        cout << root->data << " ";
    }
    else if (root->right)
    {
        printLeft(root->right);
        cout << root->data << " ";
    }
    else
    {
        cout << root->data << " ";
    }
}

void printRight(Node *root)
{
    if (root == NULL)
        return;
    if (root->right)
    {
        cout << root->data << " ";
        printRight(root->right);
    }
    else if (root->left)
    {
        cout << root->data << " ";
        printRight(root->left);
    }
    else
    {
        cout << root->data << " ";
    }
}

void printOuterTree(Node *root)
{
    if (root == NULL)
        return;
    printLeft(root->left);
    cout << root->data << " ";
    printRight(root->right);
}
int main()
{
    Node *root = inputTree();
    printOuterTree(root);
    return 0;
}