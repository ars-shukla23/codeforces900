#include<iostream>

using namespace std;

int NoOfsteps(int n){
    if(n==1)return 0;
    if(n%3!=0)return -1;
    int steps=0;
    while(n!=1){
        if(n%6==0){steps++;n/=6;}
        else if(n%3==0 && n%2!=0){steps+=2;n=n*2;n/=6;}
        else if(n%3!=0)return -1;
    }
    return steps;
}

int main(){

    int cases;cin>>cases;
    while(cases>0){
        int n;cin>>n;
        cout<<NoOfsteps(n)<<endl; 
        cases--;
    }
    return 0;
}