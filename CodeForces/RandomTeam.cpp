#include<bits/stdc++.h>
typedef long long ll;

//478B

using namespace std;

int main(){
ios::sync_with_stdio(0);
                cin.tie(0);
                cout.tie(0);
                cout<<fixed;
                cout<<setprecision(10);

ll n;
int t;
cin>>n>>t;

if(t==1){
    ll a=n*(n-1)/2;
    cout<<a<<" "<<a;
}
else {ll kmax,kmin;
kmax=(n-t+1)*(n-t)/2;

ll other1=n/t;
ll other2=n%t;
kmin=other2*(other1*(other1+1)/2);
kmin+= ((t-other2)*(other1*(other1-1)/2));

cout<<kmin<<" "<<kmax;

}



    return 0;
}