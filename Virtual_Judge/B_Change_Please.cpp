#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, x, total = 100, d = 10;
    cin>>t;
    while(t--){
       cin>>x;
       int diff = total - x;
       int rem =  diff / d;
       cout<< (rem * d)<<endl;
    }
    return 0;
}