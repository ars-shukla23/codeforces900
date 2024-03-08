#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

int luckyNumber(int l,int r){
    int max_diff=0;
    unordered_map<int,int>umap;
    for(int i=l;i<=r;i++){
        int maxd=0,mind=9,dig;
        int num=i;
        while(num>0){
            dig=num%10;
            maxd=max(dig,maxd);
            mind=min(dig,mind);
            num=floor(num/10);
        }
        max_diff=max(max_diff,maxd-mind);
        umap[i]=maxd-mind;
    }
    for(auto it:umap){
        if(it.second==max_diff) return it.first;
    }
   return -1;
}

int main(){
   int cases;
   cin>>cases;
   while(cases>0){
    int l,r;
    cin>>l>>r;
    cout<<luckyNumber(l,r)<<endl;

    cases--;
   }


    return 0;
}