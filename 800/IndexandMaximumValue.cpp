#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , m ;
        cin>>n>>m;
        vector<int> nums(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin>>nums[i];
        }
        
        int maxi = *max_element(nums.begin() , nums.end());
        for(int i = 0 ; i < m ; i++)
        {
            char ch;
            int a , b;
            cin>>ch>>a>>b;
            if(maxi >= a && maxi <= b)
            {
                if(ch == '-')
                {
                    maxi--;
                }
                else
                {
                    maxi++;
                }
            }
            cout<<maxi<<endl;
        }    
    }
    return 0;
}