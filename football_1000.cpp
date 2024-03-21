#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>


using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<string,int>freq;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        freq[s]++;
    }
    int maxval=0;
    for(auto it:freq) maxval=max(maxval,it.second);
    for(auto it:freq) if(it.second==maxval) cout<<it.first<<endl;
   
    return 0;
}