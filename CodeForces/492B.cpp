#include<bits/stdc++.h>

using namespace std;

int main(){

int n,l;
cin>>n>>l;
int a[n];
for(auto x:a){
    cin>>*x;
}
//sort(a,a+n);

for(auto x:a){
    cout<<x<<" ";
}
    return 0;
}