#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum%3!=0){
        cout<<0;
        return 0;
    }
    int temp=0,c=0;
    int ideal=sum/3;
    

    for(int i=0;i<n;i++){
        temp+=a[i];
        if(temp==ideal){
            c++;
            temp=0;
        }
    }

    cout<<c;

    return 0;
}