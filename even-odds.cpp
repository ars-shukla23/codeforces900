#include<iostream>
#include<vector>


using namespace std;

long long int Pos(long long int n,long long int k){
    if(n%2==0){
        if(k>n/2)return 2*k-n;
        else return 2*k-1;
    }
    else{
      if(k>(n+1)/2) return 2*k-n-1;
      else return 2*k-1;
    }
}

int main(){
  long long int n,k;
  cin>>n>>k;
  cout<<Pos(n,k)<<endl;

  return 0;

}