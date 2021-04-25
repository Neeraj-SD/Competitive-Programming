#include<bits/stdc++.h>

using namespace std;
int memo[1000];
vector<int> vi;
vector<int> v;

bool howSum(int sum){
    if(memo[sum]==0||memo[sum]==1) return memo[sum];
    if(sum==0) return true;    
    if(sum<0) return false; 

    for(auto x:vi){
        int remainder=sum-x;

        if(howSum(remainder)==true){
            memo[sum]=true;
            v.push_back(x);
            return true;
        }
    

    } 
    memo[sum]=false;
    return false;
    
}


int main(){

int n,m;
cin>>n>>m;

for (int i = 0; i < m; i++)
{int x;
cin>>x;
vi.push_back(x);
    
}

for(int i=0;i<1000;i++){
    memo[i]=-1;
}

cout<<howSum(n)<<"\n";
    for(auto x:v){
        cout<<x<<" ";
    }


    return 0;
}