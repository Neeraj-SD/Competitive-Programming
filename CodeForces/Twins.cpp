#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    //sorting
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(ar[j]>ar[j+1])
            swap(ar[j],ar[j+1]);
        }
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ar[i];
    }
     int c=0;
    int sback=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        c++;
        for(int j=n-1;j>=n-1-i;j--)
            sback+=ar[j];
        if(sback>(sum-sback)){
            cout<<c;
            flag=true;
        }
        if(flag)
        break;
        sback=0;
        
    }

    return 0;
}