#include<bits/stdc++.h>

using namespace std;

vector<string> input;
map<string,int> memo;


int countConstruct(string target, vector<string> input){

    if(memo.find(target)!=memo.end()) return memo[target];
    if(target=="") return 1;

    int total=0;
    for(auto x:input){
        string word=x;
        if(target.find(word)==0){
            string suffix = target.substr(word.length());
            int count = countConstruct(suffix,input);
                total+=count;
            
        }
    }
    memo[target]=total;
    return total;


}




int main(){

     cout << countConstruct("purple", {"purp", "p", "ur", "le", "purpl"})<< endl;                           // 2
    cout << countConstruct("abcdef", {"ab", "abc", "cd", "def", "abcd"})<< endl;                            // 1 
    cout << countConstruct("skateboard", {"bo", "rd", "ate", "t", "ska", "sk", "boar"})<< endl;            // 0
    cout << countConstruct("enterapotentpot", {"a", "p", "ent", "enter", "ot", "o", "t"})<< endl;
    cout << countConstruct("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", { "eee", "eeee", "eeeee"})<<"\n";
    cout<<  countConstruct("kannan",{"ka","nan","kanna","n","kan"});          // 4 

    return 0;
}