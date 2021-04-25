#include<bits/stdc++.h>

using  namespace std;

int main(){
int l,d,g,r;
double v;
cin>>l>>d>>v>>g>>r;
double t;
if(d/v>g)
t+=d/v+r;
else
{
    t+=d/v;
}


t+=(l-d)/v;

cout<<t;


    return 0;
}