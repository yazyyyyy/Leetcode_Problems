//Problem link: https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

/*You are required to complete this function*/

int maxLen(int A[], int n)
{
    // Your code here
    int sol = 0, sum = 0;
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        sum += A[i];
        if(sum == 0) sol = i + 1;
        else{
            if(mpp.find(sum) != mpp.end())
                sol = max(sol, i - mpp[sum]);
            else
                mpp[sum] = i;
        }
    }
    return sol;
}
