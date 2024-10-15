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
void insertVal(Node *&head, Node *&tail, int val)
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
// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout << endl;
//     return;
// }
// int sz(Node *head)
// {
//     Node *tmp = head;
//     int count = 0;
//     while (tmp != NULL)
//     {
//         count++;
//         tmp = tmp->next;
//     }
//     return count;
// }
void printReverse(Node *head)
{
    if (head == NULL)
        return;
    printReverse(head->next);
    cout << head->val << " ";

    return;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertVal(head1, tail1, val);
    }
    printReverse(head1);
    return 0;
}