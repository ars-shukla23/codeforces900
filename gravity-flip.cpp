#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> flipGravity(vector<int>vec){
    sort(vec.begin(),vec.end());
    return vec;
}


int main(){
   int columns;
   cin>>columns;
   vector<int>vec(columns);
   for(int i=0;i<columns;i++){
      cin>>vec[i];
   }
   vector<int>result=flipGravity(vec);
   for(int i:result){
    cout<<i<<" ";
   }

    return 0;
}