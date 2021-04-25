#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
        int start=0;
    int currentValue=0;
    int maxValue=0;
    for(int end=0;end<n;end++){
            currentValue+=ar[end];
        
                while(currentValue>m){
                    currentValue-=ar[start];
                    start++;
                }

         
         maxValue=max(maxValue,end-start+1);
    

    }
    
    
            cout<<maxValue<<"\n";

    return 0;
}