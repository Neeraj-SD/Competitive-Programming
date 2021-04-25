//Codeforces
//508B

#include<bits/stdc++.h>
typedef long long ll;


using namespace std;


int hasEven(string s){
    for(int i=0;i<s.length();i++){
        int n=s[i]-'0';
        if(n%2==0)
            return 1;
    }
    return 0;
}



int main(){
string s;
cin>>s;
int n=s.length();

if(!hasEven(s))
    cout<<"-1";
    else{
        bool done=0;
        int last=s[n-1]-'0';
        for(int i=0;i<n;i++){
            int a=s[i]-'0';
            if(a<last)
            {swap(last,i,s);
            break;
            done=1;}
        }
        
        if(!done){
        for(int i=n-2;i>0;i--){
            int a=s[i]-'0';
            if(a>last)
            {swap(last,i,s);
            break;
            done=1;}
        }
        }




    }


    return 0;
}