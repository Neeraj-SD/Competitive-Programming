#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<int > v={1,2,3,4,5};

for(int i=0;i<5;i++){
    v.push_back(i+1);
}

int *itr;
for(itr=v.begin();itr!=v.end();itr++){
    cout<<&itr<<" ";
}


    return 0;
}