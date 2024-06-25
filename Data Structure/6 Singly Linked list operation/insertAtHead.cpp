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
void insertAtTail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void insertAtPositon(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void printList(Node *head)
{
    cout << "Linked List -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "\n____________________________________" << endl
         << endl;
    cout << endl;
}
void insertAtHead(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Choose an option.\n-> 1. Insert at Tail. \n-> 2. Insert at Position.\n-> 3. Print Linked List.\n-> 4. Insert at Head. \n-> 5. Terminate." << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Enter a value: ";
            cin >> v;
            insertAtTail(head, v);
            cout << "Insert Successful!\n______________________" << endl
                 << endl;
        }
        else if (op == 2)
        {
            int pos, v;
            cout << "Enter a value: ";
            cin >> v;
            cout << "Enter a position: ";
            cin >> pos;
            if (pos == 0)
            {
                insertAtHead(head, v);
            }
            else
            {
                insertAtPositon(head, pos, v);
            }

            cout << "Insert Successful!\n______________________" << endl
                 << endl;
        }
        else if (op == 3)
        {
            printList(head);
        }
        else if (op == 4)
        {
            int v;
            cout << "Enter a value: ";
            cin >> v;
            insertAtHead(head, v);
            cout << "Insert Successful!\n______________________" << endl
                 << endl;
        }
        else if (op == 5)
        {
            break;
        }
        else
        {
            cout << "Please choose a valid option!";
        }
    }
    return 0;
}