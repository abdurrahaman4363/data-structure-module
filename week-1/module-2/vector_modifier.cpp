#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>x = {1,2,3,2,3,2,3,2,3};
    vector<int>v = {4,5};
    vector<int>v2 = {200,400,500};
    v = x;

    // cin space diye input shesh bujai
    // getline enter diye input shesh bujai


    // v.pop_back();
    // v.push_back(100);

    // v.insert(v.begin()+2,10);
    // v.insert(v.begin()+3,v2.begin(),v2.end());
    // v.erase(v.begin()+3);
    // v.erase(v.begin()+1,v.end()-2); // start from 1 , end until 2
    // v.erase(v.begin()+2, v.begin()+4);


    // replace(v.begin(),v.end(),2,10);
    // replace(v.begin(),v.begin()+3,2,10);

    // vector<int>:: iterator it;
    auto it = find(v.begin(),v.end(),30);
    cout<<*it<<endl;
    if(it == v.end()) cout<<"Not Found"<<endl;
    else cout<< "Found"<<endl;


    // cout<<v.front()<<endl;
    // cout<<v.back()<<endl;
    // cout<<v[1]<<endl;
    // cout<<v.at(1)<<endl;

    // normal for loop:
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<< " ";
    // }

    // range base for loop:
    for(int val : v){
        cout<<val<<" ";
    }

    // iterator loop
    // vector<int>:: iterator it;
    // for(it=v.begin(); it<v.end(); it++){
    //     cout<<*it<<" ";
    // }
    return 0;
}