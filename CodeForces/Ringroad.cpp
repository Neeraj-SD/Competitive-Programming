#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
ios::sync_with_stdio(0);
                cin.tie(0);
                cout.tie(0);
                cout<<fixed;
                cout<<setprecision(10);

int n,m;
cin>>n>>m;
int current=1;
ll time=0;

while(m--){
int i;
cin>>i;
if(i>=current){
    time+=(i-current);
    current=i;
}
else{
    time+=(n-current+i);
    current=i;
}

}
cout<<time;

    return 0;
}