#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int fib(int n,ll *memo){
    if(memo[n]) return memo[n];
if(n<=2) return 1;
memo[n]=fib(n-1,memo) + fib(n-2,memo);
return memo[n];
}

int main(){
    ll v[1000];
    for(int i=0;i<1000;i++){
        v[i]=0;
    }
v[1]=1;v[2]=1;
//cout<<fib(7,v)<<"\n";
int n;
cin>>n;
for(int i=1;i<n;i++){
cout<<fib(i,v)<<"\t"<<i<<"\n";}
   /* cout<<fib(8,v)<<"\n";
    cout<<fib(1,v)<<"\n";
    cout<<fib(50,v)<<"\n";*/
    return 0;

}   