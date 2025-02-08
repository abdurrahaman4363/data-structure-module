#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string>v(n);
    for(int i=0; i<n; i++){
        // cin>>v[i];
        getline(cin,v[i]);
    }
    // cin space diye input shesh bujai
    // getline enter diye input shesh bujai
    for(auto it : v){
        cout<<it<<" ";
    }
    return 0;
}