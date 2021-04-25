#include<bits/stdc++.h>

using namespace std;

vector<string> input;
map<string,int> memo;


//bool canConstruct(string,vector<string>&);

bool canConstruct(string target,vector<string> input){
    
    if(memo.find(target)!=memo.end()) return memo[target];
    if(target=="") return 1;


    for(auto x:input){
        string word=x;

        if(target.find(word)==0){
            string suffix=target.substr(word.length());
            if(canConstruct(suffix, input))
           {
                memo[target]=true;
                return 1;
           }
            
        }
    }
memo[target]=0;
return 0;
}



int main(){
  

    
     cout << canConstruct("purple", {"purp", "p", "ur", "le", "purpl"})<< endl;                           // 2
    cout << canConstruct("abcdef", {"ab", "abc", "cd", "def", "abcd"})<< endl;                            // 1 
    cout << canConstruct("skateboard", {"bo", "rd", "ate", "t", "ska", "sk", "boar"})<< endl;            // 0
    cout << canConstruct("enterapotentpot", {"a", "p", "ent", "enter", "ot", "o", "t"})<< endl;          // 4 
    cout << canConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef", {"e", "ee", "eee", "eeee", "eeeee"}); // 0

    return 0;
}