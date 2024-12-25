#include"bits/stdc++.h"
using namespace std;
int main(){
	int a[10]={0};
	int i;
	while(cin>>i,i!=0){
		a[i]+=1;
	}
	int b;
	cin>>b;
	cout<<a[b]<<endl; 
}