#include<bits/stdc++.h>

using namespace std;

bool canMake(int s,int i){

    if(s<=9*i)
    return 1;
    return 0;
}


int main(){
int m,s;
cin>>m>>s;

if(s>9*m||s<=0) {
    if(m==1&&s==0) {cout<<0<<" "<<0; return 0;}
    cout<<-1<<" "<<-1; 
    return 0;}
    int sum=s;
    string min="";
    for(int i=1;i<=m;i++){
        for(int j=0;j<10;j++){
            if((i>1||j>0)&&canMake(sum-j,m-i)){
                min+=(char)('0'+j);
                sum-=j;
                break;
            }
        }
      } 
        sum=s;
        string max="";
      for(int i=1;i<=m;i++){
        for(int j=9;j>=0;j--){
            if(sum-j>=0){
                max+=(char)('0'+j);
                sum-=j;
                break;
            }
        }
    }

    

cout<<min<<" "<<max;


    return 0;
}