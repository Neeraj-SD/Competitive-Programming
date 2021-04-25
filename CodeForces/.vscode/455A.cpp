#include<bits/stdc++.h>

using namespace std;

/*int solve(vector<int>target){
    if(target=={}) return ;

    for(int i=0;i<target.size();i++){
        target.erase(i);
    }

}*/




int main(){

    vector<int> v;
    v={1,2,2,2,3,4};
    for(auto itr=v.begin();itr!=v.end();itr++){
        if(*itr==2)
        {v.erase(itr);
        itr--;
        }
    }

    

    for(auto x:v){
        cout<<x<<" ";
    }

}