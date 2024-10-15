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
void isSame(Node *head1, Node *head2, int size1, int size2)
{
    if (size1 != size2)
    {
        cout << "NO";
        return;
    }
    else
    {
        Node *temp1 = head1;
        Node *temp2 = head2;
        while (temp1 != NULL)
        {
            if (temp1->val != temp2->val)
            {
                cout << "NO";
                return;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        cout << "YES";
        return;
    }
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertVal(head1, tail1, val);
    }
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;

        insertVal(head2, tail2, val);
    }
    int size1, size2;
    size1 = sz(head1);
    size2 = sz(head2);
    isSame(head1, head2, size1, size2);
    return 0;
}