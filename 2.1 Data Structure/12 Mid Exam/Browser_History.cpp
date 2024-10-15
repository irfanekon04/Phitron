#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string s;
    Node *next;
    Node *prev;
    Node(string s)
    {
        this->s = s;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->s << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertHead(Node *&head, Node *&tail, string s)
{
    Node *newNode = new Node(s);
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

void insertTail(Node *&head, Node *&tail, string s)
{
    Node *newNode = new Node(s);
    if (tail == NULL)
    {
        insertHead(head, tail, s);
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

Node *visit(Node *head, string pos)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (pos == temp->s)
        {
            cout << temp->s << endl;
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *cur = NULL;
    while (true)
    {
        string s;
        cin >> s;
        if (s == "end")
            break;
        insertTail(head, tail, s);
    }
    int n;
    cin >> n;
    cur = head;
    while (n--)
    {
        string operation;
        cin >> operation;
        if (operation == "visit")
        {
            string pos;
            cin >> pos;
            Node *temp = visit(head, pos);
            if (temp != NULL)
            {
                cur = temp;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (operation == "prev")
        {
            if (cur->prev == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << cur->prev->s << endl;
                cur = cur->prev;
            }
        }
        else if (operation == "next")
        {
            if (cur->next == NULL)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                cout << cur->next->s << endl;
                cur = cur->next;
            }
        }
    }
    return 0;
}