//Codeforces
//507B

#include<bits/stdc++.h>

using namespace std;

int main(){
int r,x1,y1,x2,y2;
cin>>r>>x1>>y1>>x2>>y2;

double d;
d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));

int res=ceil(d/(2*r));
cout<<res;


    return 0;
}