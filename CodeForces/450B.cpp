//codeforces
//450B

#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

const int M=1e9+7;
long long mod(long long x){
    return((x%M+M)%M);
}
long long sub(long long a,long long b){
    return mod(mod(a)-mod(b));
}
long long mul(long long a,long long b){
    return mod(mod(a)*mod(b));
}


int main(){
ll x,y;
int n;
cin>>x>>y>>n;

switch(n%6){
case 0 : cout<<sub(x,y);break;
case 1 : cout<<mod(x);break;
case 2 : cout<<mod(y);break;
case 3 : cout<<sub(y,x);break;
case 4 : cout<<mod(-x);break;
case 5 : cout<<mod(-y);break;

}


    return 0;
}