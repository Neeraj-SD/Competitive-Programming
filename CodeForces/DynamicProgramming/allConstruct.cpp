#include<bits/stdc++.h>

using namespace std;

vector<string> input;
map<string,vector<vector<string>>> memo;

vector <vector<string>> allConstruct(string target,vector<string> input){

    if(memo.find(target)!=memo.end()) return memo[target];
    if(target=="") return {{}};
    
    vector<vector<string>> result;
    for(auto x:input){
        string word=x;

        if(target.find(word)==0){
        string suffix = target.substr(word.length());
        vector<vector<string>>suffixWays = allConstruct(suffix,input);
        for(int i=0;i<suffixWays.size();i++){
            suffixWays[i].push_back(word);
            result.push_back(suffixWays[i]);
            }
        }
    }
    memo[target] = result;
    return result;

}


int main(){

vector<vector<string>> answer = allConstruct("kichu",{"ka","chu","ki","k","i","c","h","u","ch"});
    for(int i=0;i<answer.size();i++){
        reverse(answer[i].begin(),answer[i].end());
    }
for(int i=0;i<answer.size();i++){
    for(int j=0;j<answer[i].size();j++){
        cout<<answer[i][j]<<" ";
    }
    cout<<"\n";
}

cout<<"end";
    return 0;
}