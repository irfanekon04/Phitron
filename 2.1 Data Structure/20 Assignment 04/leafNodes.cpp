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
void leafNodes(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL)
        v.push_back(root->data);

    leafNodes(root->left, v);
    leafNodes(root->right, v);
}
void printDescending(Node *root)
{
    vector<int> v;
    leafNodes(root, v);
    sort(v.begin(), v.end(), greater<int>());
    for (int val : v)
        cout << val << " ";
}
int main()
{
    Node *root = inputTree();
    printDescending(root);
    return 0;
}