#include<bits/stdc++.h>

using namespace std;

void solve(){

    int n,w,h;
    cin>>w>>h>>n;
    int res=1;

    while(w%2==0){
        
            
            res*=2;
            w/=2;
        
    }
        while(h%2==0){
            
            res*=2;
            h/=2;
        }

    cout<< (res>=n?"YES\n":"NO\n");


}

int main(){
    ios::sync_with_stdio(0);
                cin.tie(0);
                cout.tie(0);
                cout<<fixed;
                cout<<setprecision(10);

int t=1;
cin>>t;

while(t--){
    solve();
}
    return 0;
}