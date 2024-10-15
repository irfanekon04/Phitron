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
void printList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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
    cout << endl
         << "Size-> " << sz << endl
         << endl;
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
    if (pos == 1)
    {
        insertAtHead(head, val);
        return;
    }
    else
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        // printList(head);
        return;
    }
}
void delHead(Node *&head)
{
    Node *delNode = head;
    head = head->next;
    delete delNode;
    cout << endl
         << "Deleted!" << endl
         << endl;
    printList(head);
    return;
}
void delTail(Node *head)
{
    Node *tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    delete tmp->next;
    tmp->next = NULL;
    cout << endl
         << "Deleted!" << endl
         << endl;
    printList(head);
    return;
}
void delPos(Node *&head, int pos)
{
    if (pos == 1)
    {
        delHead(head);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
    cout << endl
         << "Deleted!" << endl
         << endl;
    printList(head);
    return;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int op;
        cout << endl
             << endl
             << "Choose an option." << endl
             << "1. Create a List." << endl              // done
             << "2. Count the Size of the list." << endl // done
             << "3. Display List." << endl               // done
             << "4. Insert at Head." << endl             // done
             << "5. Insert at Tail." << endl
             << "6. Insert at Position" << endl
             << "7. Delete from Head." << endl
             << "8. Delete from Tail." << endl
             << "9. Delete from Position." << endl
             << "10. Exit Program!"
             << endl;
        cin >> op;
        if (op == 1)
        {
            while (true)
            {
                int val;
                cout << "Enter Value: ";
                cin >> val;
                if (val == -1)
                {
                    break;
                }
                insertValue(head, val);
            }
            printList(head);
        }
        else if (op == 2)
        {
            countSize(head);
        }
        else if (op == 3)
        {
            cout << endl
                 << "List -> ";
            printList(head);
        }
        else if (op == 4)
        {
            int val;
            cout << "Enter a value: ";
            cin >> val;
            insertAtHead(head, val);
        }
        else if (op == 5)
        {
            int val;
            cout << "Enter Value: ";
            cin >> val;
            insertValue(head, val);
        }
        else if (op == 6)
        {
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter Value: ";
            cin >> val;
            insertAtPos(head, pos, val);
        }
        else if (op == 7)
        {
            delHead(head);
        }
        else if (op == 8)
        {
            delTail(head);
        }
        else if (op == 9)
        {
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            delPos(head, pos);
        }
        else if (op == 10)
        {
            break;
        }
        else
        {
            cout << endl
                 << "Invalid Option" << endl;
        }
    }

    return 0;
}