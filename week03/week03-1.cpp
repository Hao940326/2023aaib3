/*
C++11後的版本才有range-based for 迴圈
 */
#include<iostream>
#include<string>
using namespace std;
int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  string s;
  cin>>s;
  for(char c:s){
  	if(c!='2')cout<<c;
  }cout<<endl;
  return 0;
}
