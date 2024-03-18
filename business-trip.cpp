#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minMonths(vector<int>v,int k){
    sort(v.begin(),v.end(),greater<int>());
    int months=0;
    int length=0;
    int i=0;
    while(length<k && i<12){
       length+=v[i];
       months++;
       i++;
    }
    if(length<k) return -1;
    return months;
}

int main(){
    int k;
    cin>>k;
    vector<int>v(12);
    for(int i=0;i<12;i++)cin>>v[i];
    cout<<minMonths(v,k)<<endl;



    return 0;
}