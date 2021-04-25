#include<bits/stdc++.h>
 
typedef long long int ll;

using namespace std;
ll memo[1000][1000];

int  gridTraveler(ll m,ll n){
    
    if(memo[m][n]!=0) return memo[m][n];
    if(m==1&&n==1) return 1;
    if(m==0||n==0)return 0;
    memo[m][n]=memo[n][m]= gridTraveler(m-1,n) + gridTraveler(m,n-1);  
    return memo[m][n];
}


int main(){
    ios::sync_with_stdio(0);
                cin.tie(0);
                cout.tie(0);
                cout<<fixed;
                cout<<setprecision(10);
cout<<gridTraveler(3,3)<<"\n";
cout<<gridTraveler(1,3)<<"\n";
cout<<gridTraveler(5,5)<<"\n";
cout<<gridTraveler(8,8)<<"\n";
cout<<gridTraveler(10,10)<<"\n";

}