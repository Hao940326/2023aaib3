#include<iostream>
using namespace std;
int main(){
  string s;
  int a=0;
  while(cin>>s,s!="#"){
  	a++;
  	if(s=="HELLO")cout<<"Case "<<a<<": ENGLISH"<<endl;
	else if(s=="HOLA")cout<<"Case "<<a<<": SPANISH"<<endl;
	else if(s=="HALLO")cout<<"Case "<<a<<": GERMAN"<<endl;
	else if(s=="BONJOUR")cout<<"Case "<<a<<": FRENCH"<<endl;
	else if(s=="CIAO")cout<<"Case "<<a<<": ITALIAN"<<endl;
	else if(s=="ZDRAVSTVUJTE")cout<<"Case "<<a<<": RUSSIAN"<<endl;
	else cout<<"Case "<<a<<": UNKNOWN"<<endl;
  }
}


