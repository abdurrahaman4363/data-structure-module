#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;
    vector<long long int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
// 1.test case hocche pura program ba code test case er under e ba oi loop e 
// thake input,output theke shob

// 2.query hocche kichu input niye tiye shuru hoi pura program ba code query loop e thake na

// TLE normal way:
    // while (q--)
    // {
    //     int l,r;
    //     cin>>l>>r;
    //     int s = 0;
    //     for(int i=l-1; i<=r-1; i++){
    //         s = s + v[i];
    //     }
    //     cout<<s<<endl;
    // }

// prefix sum query:
    vector<long long int>v2(v.size());
    v2[0]=v[0];
    for(int i=1; i<v2.size(); i++){
        v2[i] = v2[i-1] + v[i];
    }

    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l--; 
        r--;
        if(l == 0) cout<<v2[r]<<endl;
        else cout<<v2[r]-v2[l-1] <<endl;
    }
    

    

    return 0;
}