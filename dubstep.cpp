#include<iostream>
#include<string>

using namespace std;

string dubWord(string s){
    string dub="WUB";
    int i=0;
    string result="";
    while(s.substr(i,3)==dub)i+=3;
    while(i<s.size()){
        if(s.substr(i,3)==dub){ 
            i=i+3;
        
            if(result.back()!=' ')result+=' ';
        }
        else{
           result+=s[i];
           i++;
        }
    }
    int n=result.size();
    while(result[n-1]==' '){
        result.pop_back();
        n--;
    }
    return result;

}

int main(){
    string s;cin>>s;
    cout<<dubWord(s)<<endl;

    return 0;
}