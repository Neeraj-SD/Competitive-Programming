#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
int n = 1;
cin>>n;
int cntr1 =0,cntr2=0;

for(int i=1;i<=n;i++){
int c = 0;
cin>>c;

if(c==1)
cntr1++;
else cntr2++;

}
if((cntr1+2*cntr2)%2!=0)
cout<<"NO"<<"\n";
else{
    int sum = (cntr1+2*cntr2)/2;
    if(sum%2==0 || (sum%2==1 && cntr1!=0))
    cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}

    
}


int main()
{ios::sync_with_stdio(0);
                cin.tie(0);
                cout.tie(0);
                cout<<fixed;
                cout<<setprecision(10);

int t = 1;
cin>>t;
while(t--){
    solve();
}

    return 0;
}