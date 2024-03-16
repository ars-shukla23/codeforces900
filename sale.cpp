#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int moneyEarned(vector<int>vec,int m){
    int n=vec.size();
    sort(vec.begin(),vec.end());
    int money=0;
    for(int i=0;i<m;i++){
        if(vec[i]<=0)money-=vec[i];
    }
    return money;

}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
      cin>>vec[i];
    }
    cout<<moneyEarned(vec,m)<<endl;


    return 0;
}