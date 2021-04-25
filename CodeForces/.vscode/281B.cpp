#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    double x,y;
    cin>>x>>y>>n;

    double fraction=x/y;
    double minfraction=x/y;
    int numerator=0,denominator=1;
   
   for(int i=1;i<=n;i++){
       for(int j=1;j<=x;j++){
           double res=abs(fraction-1.0*j/i);
           if(res<minfraction){
               minfraction=res;
               numerator=j;
               denominator=i;
           }
       }
   }

   cout<<numerator<<"/"<<denominator;

return 0;
}
