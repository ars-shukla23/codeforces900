#include<iostream>
#include<string>


using namespace std;

string DangerorNot(string s){
    int streak=1;
    int n=s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            streak++;
        }
        else{
            streak=1;
        }
        if(streak>=7) return "YES";
    }
    return "NO";
}

int main(){
    string s;
    cin>>s;
    cout<<DangerorNot(s)<<endl;

    return 0;
}