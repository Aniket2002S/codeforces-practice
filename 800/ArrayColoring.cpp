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
        // vector<int> nums(n);
        int sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            int num;
            cin>>num;
            sum += num;
        }
        if(sum % 2 == 0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}