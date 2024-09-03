#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> nums(n-1);
        ll sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            cin >> nums[i];
            sum -= nums[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
