#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    // converting matrix to adjacecny list
    vector<pair<int, int>> v[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] > 0 && i != j) // if matrix contains negative valued weight then the condition should be greater than INT_MIN instead of 0 or 1.
            {
                v[i].push_back({j, mat[i][j]}); // *i connected to *j and *mat[i][j] is the cost/weight.
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for (pair<int, int> child : v[i])
        {
            cout << "{ " << child.first << " , " << child.second << " } "; //*child.first is connected to *i and *child.second is the weight/cost.
        }
        cout << endl;
    }
    return 0;
}