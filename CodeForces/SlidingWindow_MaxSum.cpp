#include<bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
int ar[n];

for(int i=0;i<n;i++){
    cin>>ar[i];
}

int k=3;
int maxValue=0;
int currentValue=0;

//Sliding Window
for(int i=0;i<n;i++){
    currentValue+=ar[i];
    if(i>=(k-1)){
        maxValue=max(maxValue,currentValue);
        currentValue-=ar[i-(k-1)];
    }
}
cout<<"Maximum Value"<<"\n";
cout<<maxValue<<"\n";

    return 0;
}