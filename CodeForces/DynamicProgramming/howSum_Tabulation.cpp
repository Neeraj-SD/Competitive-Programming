#include<bits/stdc++.h>

using namespace std;

int main(){
    int target, m;
    cin>>target>>m;
    int a[m];
    map<int, vector<int>> table;

    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<=target;i++){
        table[i]={INT_MIN};
    }

    table[0]=(vector<int>){};
    for(int i=0;i<=target;i++){
        if(table[i]==(vector<int>){INT_MIN}) continue;
        for(int j=0;j<m;j++){
            int current = a[j];
            
            if(table[i+current]==(vector<int>){INT_MIN}){ table[i+current].pop_back();}
            table[current+i] = table[i];
            table[i+current].push_back(current);
            
        }
    }
    //cout<<table[target].size();
    for(auto x:table[target]){
        cout<<x<<" ";
    }

    return 0;
}