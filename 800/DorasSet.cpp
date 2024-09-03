#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a , b ;
        cin>>a>>b;
       
        
        if(a %2 == 0)
        {
            a++;
        }
        int sum = b-a+2;
        cout<<(sum/4);
    }
    return 0;
}