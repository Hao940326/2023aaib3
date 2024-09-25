#include<iostream>
#include<String>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cout<<"請輸入一個很長的字串"<<endl;
    cin>>s;
    cout<<"字串"<<s<<"的長度"<<s.length()<<endl;
    for(int i=0;i<s.length();i++){
        cout<<i<<":"<<s[i]<<endl;
    }
}