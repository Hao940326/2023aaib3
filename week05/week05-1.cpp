#include<iostream>
#include<cctype>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(char a:s){
	if(islower(a))a=toupper(a);
	else if(isupper(a))a=tolower(a);
	cout<<a;
	}cout<<endl;
}