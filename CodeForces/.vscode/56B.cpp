#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
int ar[n];
map<int, int>mp;

for(int i=0;i<n;i++){
    cin>>ar[i];
    mp[i+1]=i+1;
}

int start=0;
for(int i=0;i<n;i++){
    if(mp[i+1]!=ar[i]){
        start=i;
        break;
    }
}

int end=0;
for(int i=n-1;i>=0;i--){
    if(mp[i+1]!=ar[i]){
        end=i;
        break;
    }
}

    
    reverse(ar+start,ar+end+1);

    for(int i=0;i<n;i++){
        if(ar[i]!=(i+1)){
            cout<<0<<" "<<0;
            return 0;
        }

    }
    if(start==0&&end==0)
    cout<<0<<" "<<0;
    else
    cout<<start+1<<" "<<end+1;




    return 0;
}