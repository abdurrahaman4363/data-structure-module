#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){   // O(logN)
        int digit = n%10;
        cout<<digit;
        n /=10;
    }
    

    for(int i=0; i<n/3; i=i*2){  // O(logN)
        cout<<i;
    }
    
    return 0;
}