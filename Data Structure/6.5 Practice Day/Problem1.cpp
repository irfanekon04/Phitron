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
void insertValue(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        // printList(head);
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    // printList(head);
    return;
}
void countSize(Node *head)
{
    Node *tmp = head;
    int sz = 0;
    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    cout << sz;
    // cout << endl
    //      << "Size-> " << sz << endl
    //      << endl;
    return;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        // cout << "Enter Value: ";
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertValue(head, val);
    }
    countSize(head);
    return 0;
}