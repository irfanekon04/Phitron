#include <bits/stdc++.h>
using namespace std;
void insertMinHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int curIndx = v.size() - 1;
    while (curIndx != 0)
    {
        int parentIndx = (curIndx - 1) / 2;
        if (v[parentIndx] > v[curIndx])
        {
            swap(v[parentIndx], v[curIndx]);
        }
        else
        {
            break;
        }
        curIndx = parentIndx;
    }
}
void deleteMinHeap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int curIndx = 0;
    while (true)
    {
        int leftIndx = 2 * curIndx + 1;
        int rightIndx = 2 * curIndx + 2;
        int lastIndx = v.size() - 1;
        if (leftIndx <= lastIndx && rightIndx <= lastIndx)
        {
            // duitai ase
            if (v[leftIndx] <= v[rightIndx] && v[leftIndx] < v[curIndx])
            {
                swap(v[leftIndx], v[curIndx]);
                curIndx = leftIndx;
            }
            else if (v[rightIndx] <= v[leftIndx] && v[rightIndx] < v[curIndx])
            {
                swap(v[rightIndx], v[curIndx]);
                curIndx = rightIndx;
            }
            else
            {
                break;
            }
        }
        else if (leftIndx <= lastIndx)
        {
            // left ase
            if (v[leftIndx] < v[curIndx])
            {
                swap(v[leftIndx], v[curIndx]);
                curIndx = leftIndx;
            }
            else
            {
                break;
            }
        }
        else if (rightIndx <= lastIndx)
        {
            // right ase
            if (v[rightIndx] < v[curIndx])
            {
                swap(v[rightIndx], v[curIndx]);
                curIndx = rightIndx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
void printHeap(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        insertMinHeap(v, x);
    }
    deleteMinHeap(v);
    printHeap(v);
    return 0;
}