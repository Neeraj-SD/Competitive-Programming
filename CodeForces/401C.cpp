#include<bits/stdc++.h>

using namespace  std;

int main(){
int n,m;
cin>>n>>m;
int k=round(1.0*m/2);
if(!(n>=(k-1)&&n<=m+1))
{cout<<-1;
return 0;
}

if(m==n-1){
for(int i=1;i<=m;i++)cout<<"01";

cout<<"0";
}
else if(n==m){
    for(int i=0;i<m;i++)
    cout<<"10";
}
else
{

int a=n,b=m;
for(int i=1;i<=n;i++){
    if(a==b-1){
        cout<<"10";a--;b--;
    }
    else{
        cout<<"110";
        a--;b-=2;
    }

}
for(int i=1;i<=b;i++)
cout<<"1";
}
    return 0;
}
