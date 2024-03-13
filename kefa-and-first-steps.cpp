#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int maxLength(vector<long long int>vec,int n){
    long long int max_length=0,curr_length=1;
    for(int i=0;i<n-1;i++){
        if(vec[i]<=vec[i+1]){
            curr_length++;
        }
        else{
            max_length=max(max_length,curr_length);
            curr_length=1;
        }
    }
    max_length=max(max_length,curr_length);
    
    return max_length;
}


int main(){
     int n;cin>>n;
     vector<long long int>vec(n);
     for(int i=0;i<n;i++){
        cin>>vec[i];
     }
     cout<<maxLength(vec,n)<<endl;


    return 0;
}