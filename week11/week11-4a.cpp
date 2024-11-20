#include"bits/stdc++.h"
using namespace std;
int main(){
	int n;
	while(cin>>n,n!=0){
		while(n>9){
		int tmp=0;
			while(n>0){
			tmp+=n%10;
			n/=10;
			}
		n=tmp;
		}
		cout<<n<<endl;
	}
}