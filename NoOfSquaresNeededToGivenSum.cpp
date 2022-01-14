#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    if(sqrt(n)==floor(sqrt(n)))return 1;
    if(n<=3)return n;
    int res = n;
    for(int i=1;(i*i)<n;i++){
        res=min(res,1+solve(n-(i*i)));
    }
    return res;
}

int main(){
    int n;cin>>n;
    cout<<solve(n);
    return 0;
}