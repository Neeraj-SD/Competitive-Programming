#include<bits/stdc++.h>
typedef long long ll;
 
using namespace std;
 
int main(){
int n;
cin>>n;
ll a[n],b[n];
 
for(int i=0;i<n;i++){
    cin>>a[i];
    cin>>b[i];
}
ll maxA=0,maxB=0;
int ind;
for(int i=0;i<n;i++){
    if(a[i]>=maxA){
        maxA=a[i];
        ind=i;
    }
    maxB=max(maxB,b[i]);
 
}
 
 
if(b[ind]==maxB)
cout<<maxB;
else
{
    cout<<maxA;
}
 
 
 
    return 0;
}