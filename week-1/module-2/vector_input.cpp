#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};

    int n;
    cin>>n;
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin>>v1[i];
    }

    for(auto val : v1){
        cout<<val<< " ";
    }

    cout<<endl;

    vector<int>v2;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    for(auto val : v2){
        cout<<val << " ";
    }
    cout<<endl;

    // vector<int>:: iterator it;
    for(auto val: v){
        cout<<val<<" ";
    }

    cout<<endl;

    for(int val: v){
        cout<<val<<" ";
    }

    cout<<endl;

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}