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
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        // printList(head);
        return;
    }
    newNode->next = head;
    head = newNode;
    // printList(head);
    return;
}
void insertAtPos(Node *&head, int pos, int val)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
        printList(head);
        return;
    }
    else
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        printList(head);
        return;
    }
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
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        insertAtPos(head, pos, val);
    }

    return 0;
}