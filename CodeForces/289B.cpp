#include<bits/stdc++.h>

using namespace std;

int main(){
int n,m,d;
cin>>n>>m>>d;

int count=n*m;
int ar[count];

for(int i=0;i<count;i++){
    cin>>ar[i];
}
sort(ar, ar+count);

for(int i=1;i<count;i++){
    int a=ar[i]-ar[i-1];
    if(a%d!=0)
    {cout<<-1;
    return 0;}
}
int div=count/2;
int c=0;

for(int i=0;i<count;i++){
    c+=(abs(ar[i]-ar[div])/d);
}

cout<<c;


    return 0;
}