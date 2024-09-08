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
void printLevel(Node *root, int level)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});
    bool flag = false;
    while (!q.empty())
    {
        Node *node = q.front().first;
        int lvl = q.front().second;
        q.pop();

        if (lvl == level)
        {
            cout << node->data << " ";
            flag = true;
        }

        if (node->left)
            q.push({node->left, lvl + 1});
        if (node->right)
            q.push({node->right, lvl + 1});
    }
    if (!flag)
    {
        cout << "Invalid" << endl;
    }
}
int main()
{
    Node *root = inputTree();
    int level;
    cin >> level;
    printLevel(root, level);
    return 0;
}