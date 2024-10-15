#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void insertHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        insertHead(head, tail, val);
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void isSame(Node *head, Node *head1, int sz, int sz1)
{
    if (sz != sz1)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        Node *tmp = head;
        Node *tmp1 = head1;

        while (tmp != NULL)
        {
            if (tmp->val != tmp1->val)
            {
                cout << "NO" << endl;
                return;
            }
            tmp = tmp->next;
            tmp1 = tmp1->next;
        }
        cout << "YES" << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;

    int val;

    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertTail(head, tail, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertTail(head1, tail1, val);
    }
    int sz = size(head);
    int sz1 = size(head1);
    isSame(head, head1, sz, sz1);
    return 0;
}