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
  	int count(0);
  	for(int i=0;i<d.size();i++){
  		for(int j=i+1;j<d.size();j++){
  			if(d[i]>d[j]){
  				int tmp=d[i];
  					d[i]=d[j];
  					d[j]=tmp;
  					count++;
  			}	
  		}
  	}
  	cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
  }
}
