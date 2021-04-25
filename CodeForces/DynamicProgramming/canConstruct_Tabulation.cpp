#include<bits/stdc++.h>

using  namespace std;

int main(){
string target;
int m;
cin>>target>>m;
string ar[m];

for(int i=0;i<m;i++){
    cin>>ar[i];
}

map<int, bool >table;

table[0]=1;

for(int i=0;i<=target.size();i++){


    for(int j=0;j<m;j++){
        if(target.find(ar[j])==0)
    }

}

    return 0;
}
