//Problem link: https://practice.geeksforgeeks.org/problems/subset-sums2234/1#
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void subset(vector<int> &arr, int N, int ind, int sum, vector<int> &sub){
        if(ind == N){
            sub.push_back(sum);
            return;
        }
        
        subset(arr, N, ind+1, sum+arr[ind], sub);
        subset(arr, N, ind+1, sum, sub);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> sub;
        subset(arr, N, 0, 0, sub);
        sort(sub.begin(), sub.end());
        return sub;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends