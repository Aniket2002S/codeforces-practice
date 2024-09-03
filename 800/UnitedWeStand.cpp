#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin>>nums[i];
        }
        sort(nums.begin() , nums.end());
        if(nums[0] == nums[nums.size()-1])
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int i = 0;
            while(nums[i] == nums[0]){ i++;}
            cout<<i<<" "<<n-i<<endl;
            for(int j = 0 ; j < i; j++)
            {
                cout<<nums[j]<<" ";
            }
            cout<<endl;
            for(int j = i ; j < n ; j++)
            {
                cout<<nums[j]<<" ";
            }
            cout<<endl;

        }
    }
}