#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v[1]<<endl;
    cout<<v.at(1)<<endl;

    // vector<int>:: iterator it;
    for(auto it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }


    return 0;
}