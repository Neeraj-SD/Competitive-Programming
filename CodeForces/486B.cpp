//codeforces
//486B

#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int m,n;




int main(){
    ios::sync_with_stdio(0);
cin>>m>>n;
int b[m][n];
int a[m][n],c[m][n];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
    cin>>b[i][j];
    a[i][j]=1;
    c[i][j]=0;
    }
}


for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

        if(b[i][j]==0){
                for(int k=0;k<n;k++){
                    a[i][k]=0;
                for(int k=0;k<m;k++){
                    a[k][j]=0;
                }    
                }

        }
    }
     
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){

        if(a[i][j]==1){
                for(int k=0;k<n;k++){
                    c[i][k]=1;
                for(int k=0;k<m;k++){
                    c[k][j]=1;
                }    
                }

        }
    }
     
}
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i][j]!=c[i][j])
            {cout<<"NO"<<"\n";
            return 0;}
        }
    }

cout<<"YES"<<"\n";
for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";}
            cout<<"\n";
}

return 0;
}