#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>table;
    table[987654321]=9;
    table[4433997]=4;
    cout<<table[987654321]<<endl;
    cout<<table[4433997]<<endl;
}