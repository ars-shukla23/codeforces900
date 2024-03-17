#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

int afterOperations(string s,int n){
    int zeroes=0,ones=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')ones++;
        else zeroes++;
    }
    if(zeroes==0 || ones==0) return n;
    else return n-2*min(zeroes,ones);
}

int main(){
    string s;
    int n;
    cin>>n>>s;
    cout<<afterOperations(s,n)<<endl;
    


    return 0;
}