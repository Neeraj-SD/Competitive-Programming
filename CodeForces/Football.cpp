#include <bits/stdc++.h>

using namespace std;

//96A-CODEFORCES

int main()
{
    string team;
    int c=1;
    cin>>team;
    char check=team[0];
    bool flag=false;
     
     for(int i=1;i<team.length();i++){
         if(team[i]==check)
         c++;
         else 
         {
             c=1;
             check=team[i];
         }
         if(c==7){
             flag=true;
             break;

         }
     }
     if(flag)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
     
    
    return 0;
}