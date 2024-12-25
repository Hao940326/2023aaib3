#include<iostream>
#include<vector>
using namespace std;
int main(){
  int a,b;cin>>a;
  while(a--){
  	cin>>b;
  	vector<int>d;
  	while(b--){
  		int c;
  		cin>>c;
  		d.push_back(c);
  		}
  
  	cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
  }
}