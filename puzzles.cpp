#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxDiff(vector<int>vec,int n,int m){
    sort(vec.begin(),vec.end());
    int min_diff=2000;
    for(int i=0;i<m-n+1;i++){
       min_diff=min(min_diff,vec[i+n-1]-vec[i]);
    }
    return min_diff;
}

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>vec(m);
    for(int i=0;i<m;i++){
        cin>>vec[i];
    }
    cout<<maxDiff(vec,n,m)<<endl;



    return 0;
}