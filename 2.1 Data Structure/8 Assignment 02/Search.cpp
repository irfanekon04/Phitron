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
void search(Node *head, int val)
{
    Node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        if (temp->val == val)
        {
            cout << i << endl;
            return;
        }
        i++;
        temp = temp->next;
    }
    cout << -1 << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int val;
            cin >> val;
            if (val == -1)
                break;
            insertVal(head, tail, val);
        }
        int val;
        cin >> val;
        search(head, val);
    }
    return 0;
}