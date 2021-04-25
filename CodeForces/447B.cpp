//Codeforces
//447B

#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
string s;
int k;
ll fs=0;
map<char, int> mp;

cin>>s>>k;
for(char i='a';i<='z';i++){
cin>>mp[i];
}
int big=1;
for(char i='a';i<='z';i++){
if(mp[i]>big)
big=mp[i];
}

for(int i=0;i<s.length();i++){
fs+=mp[s[i]]*(i+1);
}
for(int i=1;i<=k;i++){
    fs+=big*(s.length()+i);
}
cout<<fs;

    return 0;
}