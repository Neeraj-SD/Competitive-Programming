#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

map<int, ll> memo;

ll fib(int n){
    if(memo.find(n)!=memo.end()) return memo[n];
    if(n<=2) return 1LL;

    memo[n] = fib(n-1)+ fib(n-2);
    return memo[n];
}






int main(){
   for(int i=1;i<100;i++){
       cout<<i<<"\t"<<fib(i)<<"\t"<<"\n";
   }

    return 0;
}