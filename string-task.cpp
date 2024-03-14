#include<iostream>
#include<string>
#include<set>

using namespace std;

string transformS(string s){
    string result="";
    set<char>vowels={'A','O','I','E','U','Y','a','o','i','e','u','y'};
    for(char c:s){
        if(vowels.count(c)==0){
            result.push_back('.');
            result.push_back(((int)c<97)?c+32:c);
        }
    }
    return result;

}

int main(){
    string s;
    cin>>s;
    cout<<transformS(s)<<endl;


    return 0;
}