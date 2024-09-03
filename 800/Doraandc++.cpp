#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , a , b ;
        cin>>n>>a>>b;
        int minab = min(a , b);
        int maxab = max(a , b);
        vector<int> nums(n);
        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for(int i = 0 ; i < n ; i++)
        {
            cin>>nums[i];
            maxHeap.push(nums[i]);
            minHeap.push(nums[i]);
        }
        int maxTop = maxHeap.top();
        int minTop = minHeap.top();
        int mini = INT_MAX;
        while(mini > maxTop - minTop)
        {
            if()
        }

    return 0;
}