#include<iostream>
using namespace std;
int main(){
	double w,h;
	cin>>h>>w;
	double bmi=w/h/h;
	cout<<bmi<<endl;
	if(bmi>24)cout<<"too fat";
	else if(bmi>=18.5&&bmi<=24)cout<<"standard";
	else cout<<"too thin";}
