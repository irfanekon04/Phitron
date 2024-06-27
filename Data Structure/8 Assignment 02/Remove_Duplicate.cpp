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
void insertValue(Node *&head, Node *&tail, int val)
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

void removeDuplicate(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        Node *tmp2 = tmp;
        while (tmp2->next != NULL)
        {
            if (tmp2->next->val == tmp->val)
            {
                Node *tmp3 = tmp2->next;
                tmp2->next = tmp3->next;
                delete tmp3;
            }
            else
            {
                tmp2 = tmp2->next;
            }
        }
        tmp = tmp->next;
    }
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
        {
            break;
        }
        insertValue(head, tail, val);
    }
    removeDuplicate(head);
    printList(head);
    return 0;
}