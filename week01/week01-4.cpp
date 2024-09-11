#include<iostream>
using namespace std;
int main(){
  int a;cin>>a;
  while(a>0){
    cout<<a%4;
    cout<<a%4/2;
    cout<<a%2/2;
  }
  return 0;
}
