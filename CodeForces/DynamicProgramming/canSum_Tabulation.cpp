#include<bits/stdc++.h>

using namespace std;

int main()
{
    int target,m;
    cin>>target>>m;
    
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    map<int, bool>table;
    table[0]=1;

    for(int i=0;i<=target;i++){
        if(table[i]==0) continue;

        for(int j=0;j<m;j++){
            int current=a[j];
            if(i+current<=target)
            table[i+current]=1;
        }
    }

    cout<<table[target];



return 0;
} 

