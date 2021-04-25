#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

//630C

int main(){
int n;
cin>>n;
ll c=0;
while(n--){
    c+=((ll)pow(2,(n+1)));
}
cout<<c;

    return 0;
}