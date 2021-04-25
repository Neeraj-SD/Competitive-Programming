#include<bits/stdc++.h>

using namespace std;

void mat(string *b){
    string a=*b;
a+=" Hello";
cout<<a;
}


int main(){
string s="Neeraj S D";

mat(&s);
cout<<s;


    return 0;
}