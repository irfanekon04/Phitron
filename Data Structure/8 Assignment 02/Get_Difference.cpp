#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertVal(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    return;
}
int maximum(Node *head)
{
    int mx = INT_MIN;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val > mx)
        {
            mx = temp->val;
        }
        temp = temp->next;
    }
    return mx;
}
int minimum(Node *head)
{
    int mn = INT_MAX;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val < mn)
        {
            mn = temp->val;
        }
        temp = temp->next;
    }
    return mn;
}
void getDif(int mx, int mn)
{
    int dif = mx - mn;
    cout << dif;
    return;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertVal(head, tail, val);
    }
    int mx = maximum(head);
    int mn = minimum(head);
    getDif(mx, mn);
    return 0;
}