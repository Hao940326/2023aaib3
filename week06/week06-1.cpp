#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    vector<int>a;
    a.push_back(30);
    a.push_back(20);
    a.push_back(10);
    for(auto i:a)cout<<i<<endl;
    sort(a.begin(),a.end());
    cout<<endl;
    for(auto i:a)cout<<i<<endl;

}