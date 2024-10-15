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
void checkDuplicate(Node *head)
{
    Node *tmp = head;
    vector<int> v(100, 0);
    while (tmp != NULL)
    {
        v[tmp->val - 1]++;
        tmp = tmp->next;
    }
    for (int i = 1; i <= 100; i++)
    {
        if (v[i - 1] > 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
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
    checkDuplicate(head);
    return 0;
}