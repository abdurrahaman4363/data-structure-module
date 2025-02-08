#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;

    int l=0,r=n-1;
    sort(a,a+n);
    bool flag = false;
    while (l<=r)
    {
        int mid = (l + r ) / 2;
        if(a[mid] == x) {
            flag = true;
            break;
        }
        else{
            if(a[mid] < x){
                l = mid + 1;
            }
            else if(a[mid] > x){
                r = mid - 1 ;
            } 
        }
    }

    if(flag) cout<<x <<" is found";
    else cout<<"not found";
    


    return 0;
}