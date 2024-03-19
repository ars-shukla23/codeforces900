    #include<iostream>
    #include<string>
     
    using namespace std;
     
    string helloOrNo(string s){
        string hello="hello";
        int pos=0;
        for(char c:s){
            if(c==hello[pos]){
                pos++;
            }
            if(pos==5)return "YES";
        }
        return "NO";
    }
     
    int main(){
        string s;cin>>s;
        cout<<helloOrNo(s)<<endl;
        
        
        
        return 0;
    }