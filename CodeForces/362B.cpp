#include<bits/stdc++.h>

using namespace std;

int main(){
int n,m;
cin>>n>>m;
int ar[m];

for(int i=0;i<m;i++){
    cin>>ar[i];
}
sort(ar, ar+m);

if(ar[0]==1||ar[m-1]==n)
    {cout<<"NO"<<"\n";
    return 0;}

    int c=0;
    for(int i=1;i<m;i++){
    if(ar[i]-ar[i-1]==1)
    c++;
    else
    {
        c=0;
    }
    

    if(c>1){cout<<"NO"<<"\n";
    return 0;}
}
    cout<<"YES"<<"\n";
    return 1;
}