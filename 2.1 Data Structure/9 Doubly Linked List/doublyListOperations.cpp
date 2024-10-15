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
void printReverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
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

void insertAtPos(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;
    if (pos == 0)
    {
        insertHead(head, tail, val);
        return;
    }
    else if (pos == size(head))
    {
        insertTail(head, tail, val);
        return;
    }
    else if (pos > size(head))
    {
        cout << "invalid position" << endl;
        return;
    }
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}
void delHead(Node *&head)
{
    Node *delNode = head;
    head = head->next;
    delete delNode;
    head->prev = NULL;
}
void delTail(Node *&tail)
{
    Node *delNode = tail;
    tail = tail->prev;
    delete delNode;
    tail->next = NULL;
}
void delPos(Node *&head, Node *&tail, int pos)
{
    if (pos > size(head))
    {
        cout << "Invalid Position!" << endl;
        return;
    }
    if (pos == size(head) - 1)
    {
        delTail(tail);
        return;
    }
    else if (pos == 0)
    {
        delHead(head);
        return;
    }

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *delNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete delNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

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

    printList(head);
    printReverse(tail);

    return 0;
}
