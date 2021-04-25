#include<bits/stdc++.h>

using namespace std;
vector<int>  v;
int memo[1000];


bool canSum(int sum){

    if(memo[sum]==1||memo[sum]==0) return memo[sum];
    if(sum==0) return true;
    if(sum<0) return false;

    for(auto x:v){
        int remainder=sum-x;

        if(canSum(remainder)==true){
            memo[sum]=true;
            return true;
        }
    
    }
    memo[sum]=false;
    return false;
    
}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<2;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

for(int i=0;i<1001;i++){
    memo[i]=-1;
}
    

  cout<<canSum(n);
    return 0;
}