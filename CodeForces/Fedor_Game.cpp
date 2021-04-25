//467B
#include<bits/stdc++.h>

typedef long long ll;


using namespace std;



int countOne(ll n){
    int c=0;
    while(n){
        n=n&(n-1);
        c++;
    }
    return c;
}


int main(){
int n,m,k;
cin>>n>>m>>k;
ll ar[m+1];
int count=0;
ll res=0;
for(int x:ar){
    cin>>x;
}
for(int x:ar){
    cout<<x<<" ";
}



    return 0;
}

