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
void checkSort(Node *head)
{
    Node *tmp = head;
    int flag = 1;
    while (true)
    {
        if (tmp->next == NULL)
        {
            break;
        }
        if (tmp->val > tmp->next->val)
        {
            flag = 0;
        }
        tmp = tmp->next;
    }
    if (flag != 0)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
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
    checkSort(head);
}