#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[20][20];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			//cout<<a[i][j];
		}
		//cout<<endl;
	}
	cout<<endl;		
	for(int j=0;j<m;j++){
		for(int i=n-1;i>=0;i--){
			printf("%2d ",a[i][j]);
		}
		cout<<endl;
	}
}