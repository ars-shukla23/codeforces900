#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int Coins(vector<int>vec,int n,int sum){
    sort(vec.begin(),vec.end());
    int forme=0;
    int coins=1;
    for(int i=n-1;i>=0;i--){
        forme+=vec[i];
        if(forme>sum-vec[i]){
            return coins;
        }
        else{
            sum-=vec[i];
            coins++;
        }
        
    }
    return 0;

}


int main(){
    int n;
    cin>>n;
    int sum=0;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec[i]=num;
        sum+=num;
    }
    cout<<Coins(vec,n,sum)<<endl;
}