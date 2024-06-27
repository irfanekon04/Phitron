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
int sz(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void printList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
    return;
}
void insertAtHead(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    return;
}
void insertAtTail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // cout << tail->next->val << endl;
    tail->next = newNode;
    tail = newNode;
    // cout << tail->val << endl;
}
void delHead(Node *&head, Node *&tail)
{
    Node *delNode = head;
    head = head->next;
    if (head == NULL)
    {
        tail = NULL;
    }
    delete delNode;
}
void delPos(Node *&head, Node *&tail, int v)
{
    if (v >= sz(head))
    {
        return;
    }
    if (v == 0)
    {
        delHead(head, tail);
        return;
    }
    Node *temp = head;
    for (int i = 0; i < v - 1; i++)
    {
        temp = temp->next;
    }
    Node *delNode = temp->next;
    temp->next = temp->next->next;
    if (temp->next == NULL)
    {
        tail = temp;
    }
    delete delNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {

        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insertAtHead(head, tail, v);
        }
        else if (x == 1)
        {
            insertAtTail(head, tail, v);
        }
        else if (x == 2)
        {
            delPos(head, tail, v);
        }
        printList(head);
    }
    return 0;
}