#include<bits/stdc++.h>

using namespace std;

//vector<int> bestSum(int, vector<int>);
//vector<int> bestSumUtil(int,vector<int>, map<int,vector<int>>&);


vector<int>input;
map<int, vector<int>>memo;
/*vector<int> bestSum(int sum, vector<int>input){
map<int,vector<int>>memo;
return bestSumUtil(sum,input,memo);

}*/

vector<int> bestSumUtil(int sum, map<int,vector<int>> &memo){

        if(memo.find(sum) != memo.end()) return memo[sum];
        if(sum==0) return {};
        if(sum<0) return {INT_MIN};

        for(int i=0;i<input.size();i++){
            int remainder=sum-input[i];
            vector<int> combination = bestSumUtil(remainder,memo);

            if(combination !=(vector<int>){INT_MIN}){
                 combination.push_back(input[i]);
                 memo[sum] = combination;
                 return memo[sum];
            }

        }
        memo[sum] = {INT_MIN};
        return {INT_MIN};



}


int main(){
int n,m;
cin>>n>>m;

vector<int >v;

for(int i=0;i<m;i++){
    int x;
    cin>>x;
    input.push_back(x);
}
    vector<int> result = bestSumUtil(n,memo);
    if(result==(vector<int>){INT_MIN}){
    cout<<0;return 0;
    }
    cout<<1<<"\n";
    for(auto x:result){
        cout<<x<<" ";
    }
    return 0;
}