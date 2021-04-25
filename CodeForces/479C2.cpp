#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
vector<pair<int,int>> v;

for (int i = 0; i <n; i++)
{int x,y;
cin>>x>>y;
v.push_back(make_pair(x,y));    
}

sort(v.begin(), v.end());
int ideal=-1;

for(int i=0;i<n;i++){
    if(ideal<=v[i].second){
        ideal=v[i].second;
    }
    else
    {
        ideal=v[i].first;
    }
    


}

cout<<ideal;


    return 0;
}