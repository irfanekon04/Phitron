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
void printList(Node *head)
{
    cout << "Linked List -> ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << "\n____________________________________" << endl;
    cout << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Choose an option.\n-> 1. Insert a Tail. \n-> 2. Print Linked List.\n-> 3. Terminate." << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << "Enter a value: ";
            cin >> v;
            insertAtTail(head, v);
            cout << "Insert Successful!\n______________________" << endl;
        }
        else if (op == 2)
        {
            printList(head);
        }
        else if (op == 3)
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