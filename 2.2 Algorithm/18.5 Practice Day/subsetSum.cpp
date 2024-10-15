//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int dp[105][105];
    void dpInit()
    {
        memset(dp, -1, sizeof(dp));
    }
    bool subSum(int n, vector<int> arr, int sum)
    {
        if (n == 0)
        {
            if (sum == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        if (dp[n][sum] != -1)
        {
            return dp[n][sum];
        }
        if (arr[n - 1] <= sum)
        {
            return dp[n][sum] = subSum(n - 1, arr, sum - arr[n - 1]) || subSum(n - 1, arr, sum);
        }
        else
        {
            return dp[n][sum] = subSum(n - 1, arr, sum);
        }
    }
    bool isSubsetSum(vector<int> arr, int sum)
    {
        // code here
        int n = arr.size();
        bool dp[n + 1][sum + 1];
        dp[0][0] = true;
        for (int i = 1; i <= sum; i++)
        {
            dp[0][i] = false;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= sum;j++)
            {
                if (arr[i-1]<=j)
                {
                    dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                }
                else{
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][sum];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        cin >> sum;

        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0;
}

// } Driver Code Ends