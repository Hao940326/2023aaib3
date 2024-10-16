#include"bits/stdc++.h"
using namespace std;
int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    vector<int>tmp;
    int n,count=0;
    while(cin>>n){
        count++;
        tmp.push_back(n);
        if(count%2==0)cout<<(tmp[count/2]+tmp[count/2-1])/2<<endl;
        else cout<<tmp[count/2]<<endl;
    }

}