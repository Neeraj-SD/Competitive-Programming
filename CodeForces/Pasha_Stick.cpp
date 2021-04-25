#include<bits/stdc++.h>
typedef long long ll;

//610A

using namespace std;

int main(){
    ll n;
    cin>>n;

if(n%2){
    cout<<0;
}
else{
n/=2;
if(n%2==0)
cout<<(n-2)/2;
else
{
    cout<<(n-1)/2;
}


}

    return 0;
}