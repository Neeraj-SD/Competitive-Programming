#include<bits/stdc++.h>

using namespace std;
map<int,long long> table;

int main(){

    table[1]=1LL;

 int n;
 cin>>n;

 for(int i=1;i<=n;i++){
     table[i+1]+=table[i];
     table[i+2]+=table[i];

 }

 cout<<table[n];

    return 0;
}