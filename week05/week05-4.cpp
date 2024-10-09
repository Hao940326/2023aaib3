#include"bits/stdc++.h"
using namespace std;
int main(){
  string str;
  string a="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
  while(getline(cin,str)){
  
  for(int i=0;i<str.size();i++){
  		char c=tolower(str[i]);
  		if(c==' '){
  			cout<<" ";
  	}
  	else{
  		cout<<a[a.find(c)-2];
  	}
  }
  cout<<endl;
  }
}
