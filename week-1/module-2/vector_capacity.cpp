#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    // cout<<v.max_size();
    // cout<<v.capacity()<<endl;
    v.push_back(10);
    // cout<<v.capacity()<<endl;
    v.push_back(20);
    // cout<<v.capacity()<<endl;
    v.push_back(30);
    // cout<<v.capacity()<<endl;
    v.push_back(40);
    // cout<<v.capacity()<<endl;
    v.push_back(50);
    // cout<<v.capacity()<<endl;
    // v.clear();
    // v.size();
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // reverse(v.begin(),v.end());
    v.resize(2);
    v.resize(6,3);
    cout<<v.size()<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}