#include<bits/stdc++.h>

using namespace std;

int main(){ 
 int target,m;
 cin>>target>>m;
 int ar[m];
map<int, vector<int>> table;
 for(int i=0;i<m;i++){
     cin>>ar[i];
 }

 for(int i=0;i<=target;i++){
     table[i]={INT_MIN};
 }
table[0]={};

 for(int i=0;i<=target;i++){
     if(table[i]==(vector<int>){INT_MIN}) continue;

     for(int j=0;j<m;j++){
         int current = ar[j];

         if(table[current+i]==(vector<int>){INT_MIN}) table[current +i].pop_back();
         if(table[i].size()<table[current+i].size()||table[current+i]==(vector<int>){}){
         table[current+i]=table[i];
         table[current+i].push_back(current);
         }
         
     }
 }

    for(auto x:table[target]){
        cout<<x<<" ";
    }
 
 return 0;
}
