#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector<int>v;
    // vector<int>v(5)
    // vector<int>v(5,10);
    // vector<int>v2(5,100);
    // vector<int>v(v2);
    int a[5]={1,2,3,4,5};
    // vector<int>v(a,a+5);
    vector<int>v={1,2,3,4,5};

    reverse(v.begin(), v.end());

    for (auto i : a)
        cout << i << ",";

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    cout<<v.size();
    return 0;
}