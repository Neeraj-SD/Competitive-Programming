#include<bits/stdc++.h>

using namespace std;

int main(){
    int x1,y1,x2,y2,r1,r2;
    cin>>x1>>y1>>r1>>x2>>y2>>r2;

    double distance=sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    distance-=r1+r2;
    distance/=2;

    cout<<setprecision(18)<<distance;


    
    return 0;
}