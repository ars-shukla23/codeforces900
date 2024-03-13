#include<iostream>
#include<string>


using namespace std;

string producesOutput(string s){
    for(char c:s){
        if(c=='H' ||c=='Q' ||c=='9'){
           return "YES";
        }
    }
    return "NO";
}

int main(){
    string s;cin>>s;
    cout<<producesOutput(s)<<endl;


    return 0;
}