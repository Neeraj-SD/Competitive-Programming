#include<bits/stdc++.h>

using namespace std;

int main(){
    int s,l;
    cin>>s>>l;
    vector<int> v;

while(l>0&&s>0){
    if(s-(l&-l)>=0)
    s-=l&(-l);
    v.push_back(l);
    l--;
    
}

if(s>0){
    cout<<-1<<"\n";
    return 0;
}
cout<<v.size()<<"\n";
for(auto x:v){
cout<<x<<" ";}

    return 0;
}