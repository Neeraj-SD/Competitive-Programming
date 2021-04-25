#include<bits/stdc++.h>

using namespace std;

int main(){
int n,m;
cin>>n>>m;
int grid[n+1][m+1];

for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++)
        grid[i][j]=0;
}
grid[1][1]=1;



for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        int add=grid[i][j];
        if(i+1<=n)
        grid[i+1][j]+=add;
        if(j+1<=m)
        grid[i][j+1]+=add; 
        
    }
        
}

cout<<grid[n][m];

    
    
    return 0;
}