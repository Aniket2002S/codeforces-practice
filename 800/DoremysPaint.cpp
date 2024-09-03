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
        vector<ll> nums(n);
        unordered_map<ll, int> mpp;  // Use ll for key type to match nums type
        
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            mpp[nums[i]]++;
        }

        if (n == 2 || n == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (mpp.size() > 2)
            {
                cout << "NO" << endl;
            }
            else if(mpp.size() ==1)
                cout<<"YES"<<endl;
            else 
            {
                auto it = mpp.begin();  
                int first_count = it->second;
                it++;
                int second_count = it->second;

                if (abs(first_count - second_count) <= 1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            
        }
    }
    return 0;
}
