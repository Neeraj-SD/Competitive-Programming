#include<bits/stdc++.h>

using namespace std;

vector<int> input;
map<int,vector<int>> memo;

vector<int> bestSum(int sum,map<int,vector<int>> &memo){

    if(memo.find(sum)!=memo.end()) return memo[sum];
    if(sum==0) return {};
    if(sum<0) return {INT_MIN};

    vector<int> shortestCombination={INT_MIN};

    for(auto x:input){
        int remainder=sum-x;
        vector<int> combination = bestSum(remainder,memo);
         if(combination!=(vector<int>){INT_MIN}){
             combination.push_back(x);
                if(shortestCombination ==(vector<int>){INT_MIN} || combination.size()<shortestCombination .size()){
                    shortestCombination = combination;
                }

         }

    }
    memo[sum]= shortestCombination;
    return memo[sum];

}



int main(){
int n,m;
cin>>n>>m;

for(int i=0;i<m;i++){
    int x;
    cin>>x;
    input.push_back(x);
}

vector<int> result = bestSum(n,memo);

 if(result==(vector<int>){INT_MIN}){
    cout<<"{}";return 0;
    }
for(auto x:result){
    cout<<x<<" ";
}
    return 0;
}