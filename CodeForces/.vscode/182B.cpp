#include<bits/stdc++.h>

using namespace std;

int main(){
int d,m;
cin>>d>>m;
int ar[m];
for(int i=0;i<m;i++){
cin>>ar[i];
}
int c=0;
for(int i=0;i<(m-1);i++){
    c+=(d-ar[i]);
}


cout<<c;
    return 0;
}

    
